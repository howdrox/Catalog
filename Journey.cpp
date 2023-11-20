/*************************************************************************
                           Journey  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Journey> (fichier Journey.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Journey.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs
Journey &Journey::operator=(const Journey &unTrajet)
// Algorithme :
//
{
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
Journey::Journey(Journey &unTrajet)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Journey>" << endl;
#endif

_begin = unTrajet._begin;
_end = unTrajet.end;
} //----- Fin de Journey (constructeur de copie)

Journey::Journey(char *depart, const char *arrivee){
    _begin = depart;
    _end = arrivee;

}

Journey::Journey()
// Algorithme :
//
{

#ifdef MAP
    cout << "Appel au constructeur de <Journey>" << endl;
#endif
} //----- Fin de Journey

Journey::~Journey()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Journey>" << endl;
#endif
} //----- Fin de ~Journey

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
