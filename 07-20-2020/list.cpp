/**
 * Linked list implementation.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include "list.h"

Node::Node(int v) : value(v) {}

/**
 * add() adds value v at the end of the list.
 * - v: Any integer
 */
void List::add(int v) {
  Node *np = new Node(v);
  if (_head == nullptr) {
    _head = _tail = np;
  } else {
    _tail->next = np;
    _tail = _tail->next;
  }
}

/**
 * find() searches list and returns true if found.
 * - v: Any integer
 */
bool List::find(int v) {
  for (Node *np = _head; np != nullptr; np = np->next) {
    if (np->value == v) {
      return true;
    }
  }
  return false;
}

/**
 * insertAfter() locates the first integer and inserts
 * the second integer after that and return true. If not found,
 * return false.
 * - v1: Value to search
 * - v2: Value to insert
 */
bool List::insertAfter(int v1, int v2) {
  for (Node *np = _head; np != nullptr; np = np->next) {
    if (np->value == v1) {
      Node *next = new Node(v2);
      next->next = np->next;
      np->next = next;
      if (np == _tail) {
        _tail = next;
      }
      return true;
    }
  }

  return false;
}

/**
 * remove() deletes the node with the given value and returns true
 * if found.
 * - v: Any integer
 */
bool List::remove(int v) {
  // No elements
  if (_head == nullptr) {
    return false;
  }

  // In the head itself
  if (_head->value == v) {
    Node *head = _head;
    // Only one element
    if (_head == _tail) {
      _tail = _head->next;
    }
    _head = _head->next;
    delete head;
    return true;
  }

  for (Node *np = _head; np->next != nullptr; np = np->next) {
    if (np->next->value == v) {
      Node *next = np->next;
      np->next = np->next->next;
      // Update tail if necessary
      if (next == _tail) {
        _tail = np;
      }
      delete next;
      return true;
    }
  }

  return false;
}
