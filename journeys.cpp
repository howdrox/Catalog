/*************************************************************************
                           journeys
                             -------------------
    début                : 27/11/2023
    copyright            : (C) 2023 par Jixiang, Adam, Clément, Louis
    binome               : B3311 et B3309
*************************************************************************/

//---------- Réalisation de la classe <journeys> (fichier journeys.cpp) ----------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using std::cout;
using std::ostream;

//------------------------------------------------------ Include personnel
#include "journeys.h"

//----------------------------------------------------------------- PUBLIC

//------------------------------------------------- Surcharge d'opérateurs
ostream &operator<<(ostream &os, const Journeys &journeys) {
  journeys.show();
  return os;
} //----- Fin de operator <<

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes privées
void Journeys::show(const char sep) const 
// Algorithme :
// Show all the journeys in the journeys
// sep : the separator between each journey
// If sep is '\n', the function will print the index of the journey
// before printing the journey
// If sep is not '\n', the function will not print the index of the journey
// before printing the journey
{
  Node<Journey> *nodeJourney = journeyLinkedList.GetFirst();

  for (unsigned int i = 1; nodeJourney; i++) {
    if (sep == '\n')
      cout << i << ". ";

    cout << *nodeJourney->pdata;
    nodeJourney = nodeJourney->next;

    if (nodeJourney)
      cout << sep;
  }
} //----- Fin de show
