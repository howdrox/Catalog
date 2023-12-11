/*************************************************************************
                           SimpleJourney  -  description
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//- Réalisation de la classe <SimpleJourney> (fichier SimpleJourney.cpp) -

//---------------------------------------------------------------- INCLUDE

//------------------------------------------------------ Include personnel
#include "simpleJourney.h"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void SimpleJourney::show(void) const
// Algorithme :
// Show the journey
// The format is : from --(transportMethod)-> to
{
  std::cout << _from << " --(" << _transportMethod << ")-> " << _to;
} //----- Fin de show

//-------------------------------------------- Constructeurs - destructeur

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
} //----- Fin de ~SimpleJourney
