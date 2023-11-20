/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if !defined(TRAJET_H)
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet>
//
//
//------------------------------------------------------------------------

class Trajet
{
    //----------------------------------------------------------------- PUBLIC

public:
    //----------------------------------------------------- Méthodes publiques
    virtual void Afficher() const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------- Surcharge d'opérateurs
    Trajet &operator=(const Trajet &unTrajet);
    // Mode d'emploi :
    //
    // Contrat :
    //

    //-------------------------------------------- Constructeurs - destructeur
    Trajet();
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Trajet(const Trajet &unTrajet);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Trajet(const char *depart, const char *arrivee, const char *transport);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Trajet();
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés
    const char *_depart;
    const char *_arrivee;
};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // Trajet_H
