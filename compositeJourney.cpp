/*************************************************************************
                           compositeJourney
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//---------- Réalisation de la classe <compositeJourney> (fichier compositeJourney.cpp) ----------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <cstdlib>
#include <cstring>
#include <ostream>
using std::ostream;
using std::strcmp;

//------------------------------------------------------ Include personnel
#include "compositeJourney.h"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
int CompositeJourney::Add(Journey *pjourney, bool check) 
// Algorithme :
// If the list is empty, add the journey to the list and update _from and _to
// If the list is not empty, check if the journey can be added to the list
//    If the journey can be added to the list, add it to the list and update _to
//    If the journey can't be added to the list, delete it and return -1
// important : should pass a new Journey* object,
// CompositeJourney will make the GC for it
// check is used to check if the journeys is continuous.
// we need to redifine << here because it exist in both Journey and Journeys
{
  if (!journeyLinkedList.GetFirst()) {

    Journeys::Add(pjourney);
    // Using free instead of delete because the string was created with
    // strdup(), which require a free
    free((char *)_from);

    free((char *)_to);
    _from = strdup(pjourney->GetFrom());
    _to = strdup(pjourney->GetTo());
    return 0;
  }

  if (check && std::strcmp(journeyLinkedList.GetLast()->pdata->GetTo(),
                           pjourney->GetFrom())) {

    delete pjourney;
    return -1;
  }

  Journeys::Add(pjourney);
  // Using free instead of delete because the string was created with strdup(),
  // which require a free

  free((char *)_to);
  _to = strdup(pjourney->GetTo());
  return 0;
} //----- Fin de Add

//------------------------------------------------- Surcharge d'opérateurs
std::ostream &operator<<(std::ostream &os, const CompositeJourney &compositeJourney) {
  compositeJourney.show();
  return os;
} //----- Fin de operator <<

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void CompositeJourney::show(void) const {
  Journeys::show();
} //----- Fin de show
