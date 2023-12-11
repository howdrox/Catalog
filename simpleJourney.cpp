#include "simpleJourney.h"

void SimpleJourney::show(void) const
// Algorithme :
// Show the journey
// The format is : from --(transportMethod)-> to
{
  std::cout << _from << " --(" << _transportMethod << ")-> " << _to;
}

SimpleJourney::SimpleJourney(const char *start, const char *end,
                             const char *transportMethod)
    : Journey(start, end), _transportMethod(strdup(transportMethod)) {
#ifdef TRACE_ENABLED
  std::cout << "Constructor called for <SimpleJourney>" << std::endl;
#endif
}

SimpleJourney::~SimpleJourney()
// Algorithme :
// Free the memory allocated by strdup()
// Using free instead of delete because the string was created with strdup(),
// which require a free
{
#ifdef TRACE_ENABLED
  std::cout << "Destructor called for <SimpleJourney>" << std::endl;
#endif
  free((char *)_transportMethod);
}
