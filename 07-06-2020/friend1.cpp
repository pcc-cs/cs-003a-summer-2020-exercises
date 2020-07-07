/**
 * Check out friend function behavior.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>
#include "animal.h"
#include "student.h"

void dumpAnimal(Animal a) {
  printf("a1 legs: %d\n", a._legs);
}

int main() {
  Animal a1(8);
  dumpAnimal(a1);

  Student s1(a1);
  s1.dumpData();
}
