/*************************************************************************
                           Journey  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Journey> (fichier Journey.h) ----------------
#ifndef JOURNEYS_H
#define JOURNEYS_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Journey>
//
//
//------------------------------------------------------------------------

class Journeys
{
    //----------------------------------------------------------------- PUBLIC

public:
    //----------------------------------------------------- Méthodes publiques
    virtual void Show() const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------- Surcharge d'opérateurs
    Journeys &operator=(const Journeys &unTrajet);
    // Mode d'emploi :
    //
    // Contrat :
    //

    //-------------------------------------------- Constructeurs - destructeur
    Journeys();
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Journeys(const Journeys &unTrajet);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Journeys(const char *depart, const char *arrivee, const char *transport);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Journeys();
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés
    const char *_begin;
    const char *_end;
};

//-------------------------------- Autres définitions dépendantes de <Journey>

#endif // JOURNEY_H
