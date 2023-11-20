/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Catalogue.h"

//------------------------------------------------------------- Constantes
#define TAILLE_MIN 10
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Catalogue::Ajouter(Trajet &unTrajet)
// Algorithme :
//
{
    if (_taille < sizeof(_catalogue) / sizeof(Trajet *))
    {
        _catalogue[_taille] = &unTrajet;
        _taille++;
    }
    else
    {
        Trajet **catalogueTemporaire = new Trajet *[(_taille + 1) * sizeof(Trajet *)];

        for (int i = 0; i < _taille; i++)
        {
            catalogueTemporaire[i] = _catalogue[i];
        }

        catalogueTemporaire[_taille] = &unTrajet;
        _taille++;
        _catalogue = catalogueTemporaire;

        delete[] catalogueTemporaire;
    }
} //----- Fin de Ajouter

void Catalogue::Afficher() const
// Algorithme :
//
{
    for (int i = 0; i < _taille; i++)
    {
        _catalogue[i]->Afficher();
    }
} //----- Fin de Afficher

void Catalogue::Rechercher(const char *depart, const char *arrivee) const
// Algorithme :
//
{
    // Version simple :

} //----- Fin de Rechercher

//------------------------------------------------- Surcharge d'opérateurs
Catalogue &Catalogue::operator=(const Catalogue &unCatalogue)
// Algorithme :
//
{
    _taille = unCatalogue._taille;
    _catalogue = new Trajet *[_taille * sizeof(Trajet *)];

    for (int i = 0; i < _taille; i++)
    {
        _catalogue[i] = unCatalogue._catalogue[i];
    }
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue(const Catalogue &unCatalogue)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Catalogue>" << endl;
#endif

    _taille = unCatalogue._taille;
    _catalogue = new Trajet *[_taille * sizeof(Trajet *)];

    for (int i = 0; i < _taille; i++)
    {
        _catalogue[i] = unCatalogue._catalogue[i];
    }

} //----- Fin de Catalogue (constructeur de copie)

Catalogue::Catalogue()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Catalogue>" << endl;
#endif

    _taille = 0;
    _catalogue = new Trajet *[TAILLE_MIN];

} //----- Fin de Catalogue

Catalogue::Catalogue(Trajet **desTrajets)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Catalogue>" << endl;
#endif

    _taille = sizeof(desTrajets) / sizeof(Trajet *);
    _catalogue = new Trajet *[_taille * sizeof(Trajet *)];

    for (int i = 0; i < _taille; i++)
    {
        _catalogue[i] = desTrajets[i];
    }

} //----- Fin de Catalogue

Catalogue::~Catalogue()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Catalogue>" << endl;
#endif

    delete[] _catalogue;

} //----- Fin de ~Catalogue

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
