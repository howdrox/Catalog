/*************************************************************************
                           CompositeJourney  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <CompositeJourney> (fichier CompositeJourney.h) ----------------
#if !defined(TC_H)
#define TC_H

//--------------------------------------------------- Interfaces utilisées
#include "Journey.h"
#include "Journeys.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CompositeJourney>
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
    CompositeJourney &operator=(const CompositeJourney &unTC);
    // Mode d'emploi :
    //
    // Contrat :
    //

    //-------------------------------------------- Constructeurs - destructeur
    CompositeJourney();
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CompositeJourney(const CompositeJourney &unTC);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CompositeJourney(Journey **desTrajets);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CompositeJourney();
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés
    Journeys** _journeys;
};

//-------------------------------- Autres définitions dépendantes de <CompositeJourney>

#endif // TC_H
