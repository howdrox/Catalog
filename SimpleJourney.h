#ifndef TS_H
#define TS_H

#include "Journey.h"

class SimpleJourney : public Journey {

public:
  void Show() const;

  friend void operator<<(std::ostream &cout, const SimpleJourney &simpleJourney);

  SimpleJourney();

  SimpleJourney(const char *depart, const char *arrivee, const char *transport);

  virtual ~SimpleJourney();

protected:
  const char *_transportMethod;
};

#endif
