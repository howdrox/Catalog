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
CompositeJourney &CompositeJourney::operator=(const CompositeJourney &aCompositeJourney)
// Algorithme :
//
{
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
CompositeJourney::CompositeJourney(const CompositeJourney &aCompositeJourney)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CompositeJourney>" << endl;
#endif
    _journeys = new Journeys *[sizeof(Journey *)];

    for (int i = 0; i < _taille; i++)
    {
        _journeys.Add(desTrajets[i]);
    }
} //----- Fin de CompositeJourney (constructeur de copie)

CompositeJourney::CompositeJourney()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CompositeJourney>" << endl;
#endif
} //----- Fin de CompositeJourney

CompositeJourney::CompositeJourney(Journey **desTrajets)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CompositeJourney>" << endl;
#endif
    int _taille = sizeof(desTrajets) / sizeof(Journey*);
    _journeys = new Journeys *[_taille * sizeof(Journey *)];

    int i;
    for (i = 0; i < _taille; i++)
    {
        _journeys.Add(desTrajets[i]);
        if (i==0){
            _begin = desTrajets[i]->_begin;
        }
    }
    _end = desTrajets[i]->_end;

} //----- Fin de CompositeJourney

CompositeJourney::~CompositeJourney()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CompositeJourney>" << endl;
#endif*
delete _journeys;
} //----- Fin de ~CompositeJourney

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
