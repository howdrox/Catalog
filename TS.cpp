/*************************************************************************
                           TS  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TS> (fichier TS.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TS.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void TS::Afficher() const
// Algorithme :
//
{
} //----- Fin de Afficher

//------------------------------------------------- Surcharge d'opérateurs
TS &TS::operator=(const TS &unTS)
// Algorithme :
//
{
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
TS::TS(const TS &unTS)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TS>" << endl;
#endif
} //----- Fin de TS (constructeur de copie)

TS::TS()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TS>" << endl;
#endif
} //----- Fin de TS

TS::TS(const char *depart, const char *arrivee, const char *transport)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TS>" << endl;
#endif
} //----- Fin de TS

TS::~TS()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TS>" << endl;
#endif
} //----- Fin de ~TS

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
