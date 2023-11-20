/*************************************************************************
                           TC  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TC> (fichier TC.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TC.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void TC::Afficher ( ) const;
// Algorithme :
//
{
} //----- Fin de Afficher


//------------------------------------------------- Surcharge d'opérateurs
TC & TC::operator = ( const TC & unTC )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
TC::TC ( const TC & unTC )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TC>" << endl;
#endif
} //----- Fin de TC (constructeur de copie)


TC::TC ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TC>" << endl;
#endif
} //----- Fin de TC


TC::TC ( const Trajet * desTrajets )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TC>" << endl;
#endif
} //----- Fin de TC


TC::~TC ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TC>" << endl;
#endif
} //----- Fin de ~TC


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

