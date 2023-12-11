#ifndef JOURNEYS_H_
#define JOURNEYS_H_

#include "journey.h"
#include "linkedList.h"

//------------------------------------------------------------------------
// Rôle de la classe <journeys>
//
// This class represents a list of journeys.
// It is used to store all the journeys in a linked list.
//
//------------------------------------------------------------------------

class Journeys {
public:
  void Add(Journey *pjourney)
  // Mode d'emploi :
  // This function will add a journey to the journeys.
  // pjourney : the journey to add
  // Contrat :
  // important : should pass a new Journey* object,
  // Journeys will make the GC for it
  {
    journeyLinkedList.Add(pjourney);
  }

  friend std::ostream &operator<<(std::ostream &os, const Journeys &journeys);

  unsigned int refCount = 0;
  // Attribute that is public because it is used by the catalog to know if a
  // journey is still used or not

protected:
  void show(const char sep = '|') const;

  LinkedList<Journey> journeyLinkedList;
};

#endif
