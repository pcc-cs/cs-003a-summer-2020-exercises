/**
 * Dog implementation.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>
#include "dog.h"

Dog::Dog() : Animal(4) {
}

void Dog::bark() {
  printf("Woof!\n");
}
