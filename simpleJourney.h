#ifndef SIMPLEJOURNEY_H_
#define SIMPLEJOURNEY_H_

#include "journey.h"

//------------------------------------------------------------------------
// Rôle de la classe <simpleJourney>
//
// This class represents a simpleJourney.
// It is used to store a journey that is composed of a start, an end and a
// transportMethod.
//
//------------------------------------------------------------------------

class SimpleJourney : public Journey {
public:
  SimpleJourney(const char *start = "", const char *end = "",
                const char *transportMethod = "");
  // Mode d'emploi :
  // This function will create a simpleJourney with the given start, end and
  // transportMethod. start : the start of the simpleJourney end : the end of
  // the simpleJourney transportMethod : the transportMethod of the
  // simpleJourney Contrat : The start, end and transportMethod must be valid
  // strings.

  virtual ~SimpleJourney();

protected:
  const char *_transportMethod;

private:
  void show(void) const;
};

#endif
