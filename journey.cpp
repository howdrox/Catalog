/*************************************************************************
                           journey
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//---------- Réalisation de la classe <journey> (fichier journey.cpp) ----------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include "journey.h"
using std::ostream;

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
Journey::~Journey()
// Algorithme :
// Free the memory allocated by strdup()
// Using free instead of delete because the string was created with strdup(),
// which require a free
{
#ifdef TRACE_ENABLED
  std::cout << "Destructor called for <Journey>" << std::endl;
#endif
  free((char *)_from);
  free((char *)_to);
} //----- Fin de ~Journey

//------------------------------------------------- Surcharge d'opérateurs
ostream &operator<<(ostream &os, const Journey &journey) {
  journey.show();
  return os;
} //----- Fin de operator <<

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void Journey::show(void) const {
  std::cout << _from << " --> " << _to;
} //----- Fin de show
