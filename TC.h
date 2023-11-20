/*************************************************************************
                           TC  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TC> (fichier TC.h) ----------------
#if !defined(TC_H)
#define TC_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TC>
//
//
//------------------------------------------------------------------------

class CompositeJourney : public Journey
{
    //----------------------------------------------------------------- PUBLIC

public:
    //----------------------------------------------------- Méthodes publiques
    void Show() const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------- Surcharge d'opérateurs
    TC &operator=(const TC &unTC);
    // Mode d'emploi :
    //
    // Contrat :
    //

    //-------------------------------------------- Constructeurs - destructeur
    TC();
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TC(const TC &unTC);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TC(const Trajet *desTrajets);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TC();
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés
    Journeys _journeys;
};

//-------------------------------- Autres définitions dépendantes de <TC>

#endif // TC_H
