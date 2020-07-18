/**
 * Linked list implementation.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include "list.h"

Node::Node(int v) : value(v) {
}

void List::add(int v) {
  Node *np = new Node(v);
  if (_head == nullptr) {
    _head = _tail = np;
  } else {
    _tail->next = np;
    _tail = _tail->next;
  }
}

bool List::find(int v) {
  for (Node *np = _head; np != nullptr; np = np->next) {
    if (np->value == v) {
      return true;
    }
  }
  return false;
}