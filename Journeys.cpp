/*************************************************************************
                           Journeys  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Journeys> (fichier Journeys.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Journeys.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs
Journeys &Journeys::operator=(const Journeys &unTrajet)
// Algorithme :
//
{
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
Journeys::Journeys(const Journeys &unTrajet)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Journeys>" << endl;
#endif
} //----- Fin de Journeys (constructeur de copie)

Journeys::Journeys()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Journeys>" << endl;
#endif
} //----- Fin de Journeys

Journeys::~Journeys()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Journeys>" << endl;
#endif
} //----- Fin de ~Journeys

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
