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

Journeys::Journeys() : _head(nullptr), _tail(nullptr) {}

Journeys::~Journeys() {}

void Journeys::Add(Journey journey) {
  Node *newNode = new Node(journey);
  if (_head == nullptr) {
    _head = _tail = newNode;
  } else {
    _tail->next = newNode;
    _tail = newNode;
  }
}

void Journeys::Show() const {
  Node *current = _head;
  while (current != nullptr) {
    current->data.Show();
    current = current->next;
  }
}

void operator<<(ostream &cout, const Journeys &journeys) { journeys.Show(); }
