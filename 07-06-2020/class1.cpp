/**
 * Class to explore inheritance.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>
#include "animal.h"
#include "dog.h"

#define boolstr(b) (b ? "Yes" : "No")

int main() {
  Animal a1(4);
  Dog d1;
  printf("a1: Biped: %s\n", boolstr(a1.isBiped()));
  printf("d1: Biped: %s\n", boolstr(d1.isBiped()));
  d1.bark();
}
