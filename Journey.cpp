#include "Journey.h"
#include <iostream>
using namespace std;

Journey::Journey(char *depart, const char *arrivee) {
  _begin = depart;
  _end = arrivee;
}

void Journey::Show() const { cout << _begin << "->" << _end << endl; }

void operator<<(ostream &cout, const Journey &journey) { journey.Show(); }