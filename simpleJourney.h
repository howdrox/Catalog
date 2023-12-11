/*************************************************************************
                           simpleJourney
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//--- Interface de la classe <simpleJourney> (fichier simpleJourney.h) ---

#ifndef SIMPLEJOURNEY_H_
#define SIMPLEJOURNEY_H_

//--------------------------------------------------- Interfaces utilisées
#include "journey.h"

//------------------------------------------------------------------------
// Rôle de la classe <simpleJourney>
//
// This class represents a simpleJourney.
// It is used to store a journey that is composed of a start, an end and a transportMethod.
//
//------------------------------------------------------------------------

class SimpleJourney : public Journey {
//----------------------------------------------------------------- PUBLIC

public:
//-------------------------------------------- Constructeurs - destructeur
  SimpleJourney(const char *start = "", const char *end = "", const char *transportMethod = "");
  // Mode d'emploi :
  // This function will create a simpleJourney with the given start, end and transportMethod.
  // start : the start of the simpleJourney
  // end : the end of the simpleJourney
  // transportMethod : the transportMethod of the simpleJourney
  // Contrat :
  // The start, end and transportMethod must be valid strings.

  virtual ~SimpleJourney();

//-------------------------------------------------------------- PROTECTED

protected:
//----------------------------------------------------- Attributs protégés

  const char *_transportMethod;

//------------------------------------------------------------------ PRIVE

private:
//------------------------------------------------------- Méthodes privées

  void show(void) const;
};

#endif
