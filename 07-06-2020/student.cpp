/**
 * Student implementation.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>
#include "student.h"

Student::Student(Animal a) : _animal(a) {
}

void Student::dumpData() {
  printf("Animal:\n\tlegs: %d\n\tweight: %.1lf\n",
    _animal._legs, _animal._weight);
}