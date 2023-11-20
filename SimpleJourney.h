/*************************************************************************
                           SimpleJourney  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <SimpleJourney> (fichier SimpleJourney.h) ----------------
#if !defined(TS_H)
#define TS_H

//--------------------------------------------------- Interfaces utilisées
#include "Journey.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <SimpleJourney>
//
//
//------------------------------------------------------------------------

class SimpleJourney : public Journey
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
    SimpleJourney &operator=(const SimpleJourney &unTS);
    // Mode d'emploi :
    //
    // Contrat :
    //

    //-------------------------------------------- Constructeurs - destructeur
    SimpleJourney();
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    SimpleJourney(const SimpleJourney &unTS);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    SimpleJourney(const char *depart, const char *arrivee, const char *transport);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~SimpleJourney();
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés

    const char *_transportMethod;
};

//-------------------------------- Autres définitions dépendantes de <SimpleJourney>

#endif // TS_H
