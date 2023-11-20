#ifndef JOURNEY_H
#define JOURNEY_H

#include <iostream>
using std::cout;
using std::endl;

class Journey {

public:
  Journey();

  Journey(Journey &unTrajet);

  Journey(char *depart, const char *arrivee);

  virtual void Show() const;

  friend void operator<<(std::ostream &cout, const Journey &journey);

  virtual ~Journey();

protected:
  const char *_begin;
  const char *_end;
};

#endif
