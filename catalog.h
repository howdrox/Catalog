#ifndef CATALOG_H_
#define CATALOG_H_

#include "journeys.h"

struct PathNode {
  // Attributes :
  // The journey that this pathNode represents
  // The last pathNode of the path to this journey
  // The next pathNodes of the path to this journey
  // The number of references to this pathNode (used to know if the pathNode is
  // still used or not and if it can be deleted or not)
  Journey *pjourney;
  PathNode *lastPathNode;
  LinkedList<PathNode> nextPathNodes;
  unsigned int refCount = 0;

  PathNode(Journey *journey, PathNode *lastNode)
      : pjourney(journey), lastPathNode(lastNode) {}
};

//------------------------------------------------------------------------
// Rôle de la classe <Catalog>
//
// This class represents a catalog of journeys.
// It is a linked list of journeys.
// It is used to store all the journeys and to search for journeys.
//
//------------------------------------------------------------------------

class Catalog : public Journeys {
public:
  void Search(const char *const from, const char *const to,
              PathNode *pathHead = nullptr);

  // This function will search all the possible journeys from the given
  // departure to the given arrival and print them.
  // from : the departure
  // to : the arrival
  // pathNode : the pathNode that contains the path to the current journey

  // A DFS Search is used to find all the possible journeys.

  // Contrat :
  // The pathNode must be a valid pathNode of the catalog.
  // The pathNode must be the pathNode of the journey that is currently
  // being searched.

  //------------------------------------------------- Surcharge d'opérateurs

  friend std::ostream &operator<<(std::ostream &os, const Catalog &Catalog);
  // This function will print the catalog in the given ostream.
  // os : the ostream where the catalog will be printed
  // Catalog : the catalog that will be printed

protected:
  PathNode pathRoot{nullptr, nullptr};
};

#endif
