/*************************************************************************
                           Journeys  -  description
                             -------------------
    start                : 20/11/2023
    copyright            : (C) 2023 par Louis Kusno
    e-mail               : louis.kusno@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <Journey> (fichier Journey.h) ----------------
#ifndef JOURNEYS_H
#define JOURNEYS_H

//------------------------------------------------------------------------
// A linked list of `Journey`
//
//------------------------------------------------------------------------

#include "Journey.h"

class Journeys
{
public:
    Journeys &operator=(const Journeys &aJourney);

    // -------------------------------------------- Constructors & Destructor
    Journeys();

    Journeys(const Journeys &journeys);

    virtual ~Journeys();

    // -------------------------------------------- Other Methods
    int Add(const char *depart, const char *arrivee, const char *transport);

    virtual void Show() const;

protected:
    Journey *_head;
};

#endif // JOURNEY_H
