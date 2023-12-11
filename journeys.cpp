#include <iostream>
using std::cout;
using std::ostream;

#include "journeys.h"

ostream &operator<<(ostream &os, const Journeys &journeys) {
  journeys.show();
  return os;
}

void Journeys::show(const char sep) const
// Algorithme :
// Show all the journeys in the journeys
// sep : the separator between each journey
// If sep is '\n', the function will print the index of the journey
// before printing the journey
// If sep is not '\n', the function will not print the index of the journey
// before printing the journey
{
  Node<Journey> *nodeJourney = journeyLinkedList.GetFirst();

  for (unsigned int i = 1; nodeJourney; i++) {
    if (sep == '\n')
      cout << i << ". ";

    cout << *nodeJourney->pdata;
    nodeJourney = nodeJourney->next;

    if (nodeJourney)
      cout << sep;
  }
}