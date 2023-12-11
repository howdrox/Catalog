/*************************************************************************
                           catalog
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//---------- Réalisation de la classe <Catalog> (fichier Catalog.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

//------------------------------------------------------ Include personnel
#include "catalog.h"

//----------------------------------------------------- Méthodes publiques
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
} //----- Fin de Search

//------------------------------------------------- Surcharge d'opérateurs
ostream &operator<<(ostream &os, const Catalog &catalog) {
  catalog.show('\n');
  return os;
} //----- Fin de operator <<
