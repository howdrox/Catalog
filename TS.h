/*************************************************************************
                           TS  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TS> (fichier TS.h) ----------------
#if !defined(TS_H)
#define TS_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TS>
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
    TS &operator=(const TS &unTS);
    // Mode d'emploi :
    //
    // Contrat :
    //

    //-------------------------------------------- Constructeurs - destructeur
    TS();
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TS(const TS &unTS);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TS(const char *depart, const char *arrivee, const char *transport);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TS();
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

//-------------------------------- Autres définitions dépendantes de <TS>

#endif // TS_H
