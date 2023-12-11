#include <cstring>
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

#include "catalog.h"

void Catalog::Search(const char *const from, const char *const to,
                     PathNode *pathNode)
// Algorithme :
// A DFS Search is used to find all the possible journeys.
{
  if (!strcmp(from, to)) {
    LinkedList<Journey> path;

    while (pathNode && pathNode->pjourney) {
      path.Add(pathNode->pjourney, false);
      pathNode = pathNode->lastPathNode;
    }

    for (Node<Journey> *nodeJourney = path.GetFirst(); nodeJourney;
         nodeJourney = nodeJourney->next) {

      cout << *(nodeJourney->pdata) << endl;
    }

    cout << endl;
    return;
  }

  if (!pathNode) {
    pathNode = &pathRoot;
  }

  for (Node<Journey> *nodeJourney = journeyLinkedList.GetFirst(); nodeJourney;
       nodeJourney = nodeJourney->next) {

    if (!strcmp(nodeJourney->pdata->GetFrom(), from)) {

      PathNode *checkPathNode = pathNode;
      bool alreadyUsed = false;

      while (checkPathNode && checkPathNode->pjourney) {

        if (checkPathNode->pjourney == nodeJourney->pdata)

          alreadyUsed = true;

        checkPathNode = checkPathNode->lastPathNode;
      }

      if (alreadyUsed)

        continue;

      PathNode *nextPathNode = new PathNode{nodeJourney->pdata, pathNode};
      pathNode->nextPathNodes.Add(nextPathNode);
      Search(nodeJourney->pdata->GetTo(), to, nextPathNode);
    }
  }
}

ostream &operator<<(ostream &os, const Catalog &catalog) {
  catalog.show('\n');
  return os;
}
