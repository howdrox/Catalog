/*************************************************************************
                           journey
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//---------- Interface de la classe <journey> (fichier journey.h)
//----------------

#ifndef JOURNEY_H_
#define JOURNEY_H_

//--------------------------------------------------- Interfaces utilisées
#include <cstring>
#include <iostream>

//------------------------------------------------------------------------
// Rôle de la classe <journey>
//
// This class represents a journey.
// It is used to store a journey by storing the start and the end of the
// journey.
//
//------------------------------------------------------------------------

class Journey {
  //----------------------------------------------------------------- PUBLIC

public:
  //----------------------------------------------------- Méthodes publiques

  const char *GetFrom(void) const { return _from; }

  const char *GetTo(void) const { return _to; }

  //------------------------------------------------- Surcharge d'opérateurs
  friend std::ostream &operator<<(std::ostream &os, const Journey &journey);

  //-------------------------------------------- Constructeurs - destructeur
  Journey(const char *start = "", const char *end = "")
      : _from(strdup(start)), _to(strdup(end)) {
#ifdef TRACE_ENABLED
    std::cout << "Constructor called for <Journey>" << std::endl;
#endif
  }
  // Mode d'emploi :
  // This function will create a journey with the given start and end.
  // start : the start of the journey
  // end : the end of the journey
  // Contrat :
  // The start and end must be valid strings.

  virtual ~Journey();

  //-------------------------------------------- Attribut publique
  unsigned int refCount = 0;
  // Attribute that is public because it is used by the catalog to know if a
  // journey is still used or not

  //------------------------------------------------------------------ PROTECTED

protected:
  //----------------------------------------------------- Attributs protégés
  const char *_from;
  const char *_to;

  //------------------------------------------------------------------ PRIVE

private:
  //----------------------------------------------------- Méthodes privées
  virtual void show(void) const;
  // Mode d'emploi :
  // This function will print the journey in the standard output.
  // The format depends on the type of the journey (virtual method).
  // Contrat :
  // The journey must be a valid journey.
};

#endif
