/**
 * Operate on list to test it.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>

#include "list.h"

#define P(v) printf("%d: %s\n", v, list.find(v) ? "Found" : "Not found")

int main() {
  List list;

  // Make sure it isn't already in the list
  int v1 = 100;
  P(v1);

  // Add and check to see it is added
  list.add(v1);
  printf("\nv1 added\n");
  P(v1);

  // Add another and check to see if both are present
  int v2 = 200;
  list.add(v2);
  printf("\nv2 added\n");
  P(v1);
  P(v2);

  // Confirm this is not present
  int v3 = 300;
  P(v3);

  // Add the third value and confirm all are present
  list.add(v3);
  printf("\nv3 added\n");
  P(v1);
  P(v2);
  P(v3);
}