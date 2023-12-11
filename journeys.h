/*************************************************************************
                           journeys
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//---------- Interface de la classe <journeys> (fichier journeys.h) ----------------
#ifndef JOURNEYS_H_
#define JOURNEYS_H_

//--------------------------------------------------- Interfaces utilisées
#include "journey.h"
#include "linkedList.h"

//------------------------------------------------------------------------
// Rôle de la classe <journeys>
//
// This class represents a list of journeys.
// It is used to store all the journeys in a linked list.
//
//------------------------------------------------------------------------

class Journeys {
  //----------------------------------------------------------------- PUBLIC

public:
  //----------------------------------------------------- Méthodes publiques

  void Add(Journey *pjourney)
  // Mode d'emploi :
  // This function will add a journey to the journeys.
  // pjourney : the journey to add
  // Contrat :
  // important : should pass a new Journey* object,
  // Journeys will make the GC for it
  {
    journeyLinkedList.Add(pjourney);
  }

  //------------------------------------------------- Surcharge d'opérateurs
  friend std::ostream &operator<<(std::ostream &os, const Journeys &journeys);

  //----------------------------------------------------- Attributs publics
  unsigned int refCount = 0;
  // Attribute that is public because it is used by the catalog to know if a journey is still used or not


protected:
  //----------------------------------------------------- Méthodes protégées
  void show(const char sep = '|') const;

  //----------------------------------------------------- Attributs protégés
  LinkedList<Journey> journeyLinkedList;
};

#endif
