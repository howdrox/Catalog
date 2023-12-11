#include "journey.h"
using std::ostream;

Journey::~Journey()
// Algorithm :
// Free the memory allocated by strdup()
// Using free instead of delete because the string was created with strdup(),
// which require a free
{
#ifdef TRACE_ENABLED
  std::cout << "Destructor called for <Journey>" << std::endl;
#endif
  free((char *)_from);
  free((char *)_to);
}

ostream &operator<<(ostream &os, const Journey &journey) {
  journey.show();
  return os;
}

void Journey::show(void) const { std::cout << _from << " --> " << _to; }
