/*************************************************************************
                           CompositeJourney  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <CompositeJourney> (fichier CompositeJourney.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "CompositeJourney.h"
#include "Journeys.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CompositeJourney::Show() const
// Algorithme :
//
{
} //----- Fin de Afficher

//------------------------------------------------- Surcharge d'opérateurs
CompositeJourney &CompositeJourney::operator=(const CompositeJourney &unTC)
// Algorithme :
//
{
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
CompositeJourney::CompositeJourney(const CompositeJourney &unTC)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CompositeJourney>" << endl;
#endif
} //----- Fin de CompositeJourney (constructeur de copie)

CompositeJourney::CompositeJourney()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CompositeJourney>" << endl;
#endif
} //----- Fin de CompositeJourney

CompositeJourney::CompositeJourney(const Journey *desTrajets)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CompositeJourney>" << endl;
#endif
} //----- Fin de CompositeJourney

CompositeJourney::~CompositeJourney()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CompositeJourney>" << endl;
#endif
} //----- Fin de ~CompositeJourney

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
