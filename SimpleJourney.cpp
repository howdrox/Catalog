#include <iostream>
using namespace std;

#include "SimpleJourney.h"

void SimpleJourney::Show() const {
  cout << _begin << "-- (" << _transportMethod << ") ->" << _end << _end;
}

void operator<<(ostream &cout, const SimpleJourney &simpleJourney) {
  simpleJourney.Show();
}

SimpleJourney::SimpleJourney() {}

SimpleJourney::SimpleJourney(const char *depart, const char *arrivee,
                             const char *transport) {
  _begin = depart;
  _end = arrivee;
  _transportMethod = transport;
}

SimpleJourney::~SimpleJourney() {}
