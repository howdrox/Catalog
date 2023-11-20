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

class TC : public Trajet
{
    //----------------------------------------------------------------- PUBLIC

public:
    //----------------------------------------------------- Méthodes publiques
    void Afficher() const;
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
    Trajet *_trajetCompose;
};

//-------------------------------- Autres définitions dépendantes de <TC>

#endif // TC_H
