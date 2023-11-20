/*************************************************************************
                           Journeys  -  description
                             -------------------
    start                : 20/11/2023
    copyright            : (C) 2023 par Louis Kusno
    e-mail               : louis.kusno@insa-lyon.fr
*************************************************************************/

#include <iostream>
using namespace std;

#include "Journeys.h"

Journeys &Journeys::operator=(const Journeys &unTrajet)
{
}

//-------------------------------------------- Constructors & Destructor
Journeys::Journeys()
{
#ifdef MAP
    cout << "Appel au constructeur de <Journeys>" << endl;
#endif
}

Journeys::Journeys(const Journeys &unTrajet)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Journeys>" << endl;
#endif
}

Journeys::~Journeys()
{
#ifdef MAP
    cout << "Appel au destructeur de <Journeys>" << endl;
#endif
}

void operator<<(ostream & cout,const Journey & journey){
    cout<<journey._begin<<"->"<<journey._end<<endl;
}