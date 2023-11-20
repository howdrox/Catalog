#include <iostream>
using namespace std;

#include "SimpleJourney.h"

void SimpleJourney::Show() const {}
SimpleJourney &SimpleJourney::operator=(const SimpleJourney &aSimpleJourney) {}
SimpleJourney::SimpleJourney(const SimpleJourney &aSimpleJourney) {
  _begin = aSimpleJourney._begin;
  _end = aSimpleJourney._end;
  _transportMethod = aSimpleJourney._transportMethod;
}

SimpleJourney::SimpleJourney() {}

SimpleJourney::SimpleJourney(const char *depart, const char *arrivee,
                             const char *transport) {
  _begin = depart;
  _end = arrivee;
  _transportMethod = transport;
}

SimpleJourney::~SimpleJourney() {}