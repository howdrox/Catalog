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

//-------------------------------------------- Constructors & Destructor
Journeys::Journeys() : _head(nullptr), _tail(nullptr)
{
#ifdef MAP
    cout << "Appel au constructeur de <Journeys>" << endl;
#endif
}

Journeys::~Journeys()
{
#ifdef MAP
    cout << "Appel au destructeur de <Journeys>" << endl;
#endif
}

// -------------------------------------------- Other Methods

void Journeys::Add(Journey journey)
{
    Node *newNode = new Node(journey);
    if (_head == nullptr)
    {
        _head = _tail = newNode;
    }
    else
    {
        _tail->next = newNode;
        _tail = newNode;
    }
}

void Journeys::Show()
{
    Node *current = _head;
    while (current != nullptr)
    {
        current->data.Show();
        current = current->next;
    }
}
