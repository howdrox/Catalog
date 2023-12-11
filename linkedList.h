#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

template <typename T>
struct Node
// Node of the linkedList
// T : the type of the data that the node will contain
// pdata : the data that the node will contain
// next : the next node of the linkedList
{
  T *pdata;
  Node<T> *next;
};

//------------------------------------------------------------------------
// Rôle de la classe <linkedList>
//
// This class represents a linkedList.
// It is used to store a linkedList of data which are the journeys
//
//------------------------------------------------------------------------

template <typename T> class LinkedList {
public:
  void Add(T *pdata, bool AddToEnd = true)
  // Mode d'emploi :
  // This function will add a data to the linkedList.
  // pdata : the data to add
  // AddToEnd : if AddToEnd is true, the data will be added to the end of the
  // linkedList.

  // Contrat :
  // important:should pass a new Journey* object,
  // LinkedList will make the GC for it
  // data should have a refCount

  // Algorithme :
  // If the linkedList is empty, add the data to the linkedList and update
  // _first and _last. If the linkedList is not empty, add the data to the
  // linkedList and update _first or _last depending on the value of AddToEnd
  {
    Node<T> *node = new Node<T>{pdata, nullptr};
    pdata->refCount++;

    if (!_first)
      _first = _last = node;
    else if (AddToEnd)
      _last = _last->next = node;
    else {
      node->next = _first;
      _first = node;
    };
  }

  Node<T> *GetFirst(void) const { return _first; }

  Node<T> *GetLast(void) const { return _last; }

  virtual ~LinkedList()
  // Algorithme :
  // Delete all the nodes of the linkedList
  // While there is a first node, delete the first node
  // RefCount is used to know if the data is still used or not
  // If the data is not used anymore, delete it
  {
    while (_first) {
      _last = _first; // from here on, _last is only used as a temp var
      _first = _first->next;
      _last->pdata->refCount--;

      if (!_last->pdata->refCount)

        delete _last->pdata;

      delete _last;
    }
  }

  unsigned int refCount = 0;
  // Attribute that is public because it is used by the catalog to know if a
  // journey is still used or not

protected:
  Node<T> *_first = nullptr;
  Node<T> *_last = nullptr;
};

#endif
