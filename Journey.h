/*************************************************************************
                           Journey  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Journey> (fichier Journey.h) ----------------
#if !defined(TRAJET_H)
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Journey>
//
//
//------------------------------------------------------------------------

class Journey
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
    Journey &operator=(const Journey &unTrajet);
    // Mode d'emploi :
    //
    // Contrat :
    //

    //-------------------------------------------- Constructeurs - destructeur
    Journey();
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Journey(const Journey &unTrajet);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Journey(const char *depart, const char *arrivee, const char *transport);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Journey();
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

#endif // Trajet_H
