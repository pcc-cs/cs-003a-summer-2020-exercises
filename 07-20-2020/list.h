/**
 * Linked list interface.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#ifndef LIST_H_
#define LIST_H_

struct Node {
  int value;
  Node *next = nullptr;
  Node(int);
};

class List {
 private:
  Node *_head = nullptr;
  Node *_tail = nullptr;

 public:
  void add(int);
  bool find(int);
  bool insertAfter(int, int);
  bool remove(int);
};

#endif  // LIST_H_