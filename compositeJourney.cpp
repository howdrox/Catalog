#include <cstdlib>
#include <cstring>
#include <ostream>
using std::ostream;
using std::strcmp;

#include "compositeJourney.h"

int CompositeJourney::Add(Journey *pjourney, bool check)
// Algorithme :
// If the list is empty, add the journey to the list and update _from and _to
// If the list is not empty, check if the journey can be added to the list
//    If the journey can be added to the list, add it to the list and update _to
//    If the journey can't be added to the list, delete it and return -1
// important : should pass a new Journey* object,
// CompositeJourney will make the GC for it
// check is used to check if the journeys is continuous.
// we need to redifine << here because it exist in both Journey and Journeys
{
  if (!journeyLinkedList.GetFirst()) {

    Journeys::Add(pjourney);
    // Using free instead of delete because the string was created with
    // strdup(), which require a free
    free((char *)_from);

    free((char *)_to);
    _from = strdup(pjourney->GetFrom());
    _to = strdup(pjourney->GetTo());
    return 0;
  }

  if (check && std::strcmp(journeyLinkedList.GetLast()->pdata->GetTo(),
                           pjourney->GetFrom())) {

    delete pjourney;
    return -1;
  }

  Journeys::Add(pjourney);
  // Using free instead of delete because the string was created with strdup(),
  // which require a free

  free((char *)_to);
  _to = strdup(pjourney->GetTo());
  return 0;
}

std::ostream &operator<<(std::ostream &os,
                         const CompositeJourney &compositeJourney) {
  compositeJourney.show();
  return os;
}

void CompositeJourney::show(void) const { Journeys::show(); }
