/**
 * Operate on list to test it.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>
#include <cassert>

#include "list.h"

#define P(v) printf("%d: %s\n", v, list.find(v) ? "Found" : "Not found")

int main() {
  List list;

  // Try removing from empty list
  assert(!list.remove(0));

  // Insert at head
  assert(!list.insertAfter(0, 100));
  assert(!list.find(100));

  // Insert after head
  list.add(10);
  assert(list.insertAfter(10, 100));
  assert(list.find(100));

  // Remove head
  assert(list.remove(10));
  assert(!list.find(10));

  // Insert another at the end and delete that
  assert(list.insertAfter(100, 200));
  assert(list.remove(200));
  assert(list.find(100));
  assert(!list.find(200));

  printf("All checks passed!\n");
}