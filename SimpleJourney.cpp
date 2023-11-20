/*************************************************************************
                           SimpleJourney  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//- Réalisation de la classe <SimpleJourney> (fichier SimpleJourney.cpp) -

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "SimpleJourney.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void SimpleJourney::Show() const
// Algorithme :
//
{
} //----- Fin de Show

//------------------------------------------------- Surcharge d'opérateurs
SimpleJourney &SimpleJourney::operator=(const SimpleJourney &aSimpleJourney)
// Algorithme :
//
{
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
SimpleJourney::SimpleJourney(const SimpleJourney &aSimpleJourney)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <SimpleJourney>" << endl;
#endif
_begin = aSimpleJourney._begin;
_end = aSimpleJourney._end;
_transportMethod = aSimpleJourney._transportMethod;
} //----- Fin de SimpleJourney (constructeur de copie)

SimpleJourney::SimpleJourney()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <SimpleJourney>" << endl;
#endif
} //----- Fin de SimpleJourney

SimpleJourney::SimpleJourney(const char *depart, const char *arrivee, const char *transport)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <SimpleJourney>" << endl;
#endif
_begin = depart;
_end = arrivee;
_transportMethod = transport;
} //----- Fin de SimpleJourney

SimpleJourney::~SimpleJourney()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <SimpleJourney>" << endl;
#endif
} //----- Fin de ~SimpleJourney

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
