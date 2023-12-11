/*************************************************************************
                           compositeJourney
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//---------- Interface de la classe <compositeJourney> (fichier compositeJourney.h) ----------------

#ifndef COMPOSITEJOURNEY_H_
#define COMPOSITEJOURNEY_H_

//--------------------------------------------------- Interfaces utilisées
#include "journey.h"
#include "journeys.h"

//------------------------------------------------------------------------
// Rôle de la classe <compositeJourney>
//
// This class represents a compositeJourney.
// It is used to store a journey that is composed of other journeys.
//
//------------------------------------------------------------------------

class CompositeJourney : public Journey, public Journeys {
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

  int Add(Journey *journey, bool check = true);
  // Mode d'emploi :

  // This function will add a journey to the compositeJourney.
  // journey : the journey to add
  // check : if check is true, the function will check if the journey can be
  // added to the compositeJourney. If check is false, the function will not
  // check if the journey can be added to the compositeJourney.
  
  // Contrat :

  // The journey must be a valid journey.
  // The journey must be a journey that can be added to the compositeJourney.
  // The journey must not be a journey that is already in the compositeJourney.


//------------------------------------------------- Surcharge d'opérateurs

  friend std::ostream &operator<<(std::ostream &os, const CompositeJourney &compositeJourney);
  // Mode d'emploi :
  // This function will print the catalog in the given ostream.
  // os : the ostream where the catalog will be printed
  // compositeJourney : the compositeJourney that will be printed

//------------------------------------------------------------------ PRIVE

private:
//----------------------------------------------------- Méthodes protégées
  void show(void) const;
};

#endif
