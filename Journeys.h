/*************************************************************************
                           Journeys  -  description
                             -------------------
    start                : 20/11/2023
    copyright            : (C) 2023 par Louis Kusno
    e-mail               : louis.kusno@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <Journey> (fichier Journey.h)
//----------------
#ifndef JOURNEYS_H
#define JOURNEYS_H

//------------------------------------------------------------------------
// A linked list of `Journey`
//------------------------------------------------------------------------

#include "Journey.h"

struct Node {
  Journey data;
  Node *next;

  // Constructor to initialize the node with data and next pointer
  Node(Journey j) : data(j), next(nullptr) {}
};

class Journeys {
public:
  Journeys();

  Journeys(const Journeys &journeys);

  virtual ~Journeys();

  void Add(Journey journey);

  void Show() const;

  friend void operator<<(std::ostream &cout, const Journeys &Journeys);

protected:
  Node *_head;
  Node *_tail;
};

#endif
