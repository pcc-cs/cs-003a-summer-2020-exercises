/**
 * Dog class.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#ifndef DOG_H_
#define DOG_H_

#include "animal.h"

class Dog : public Animal {
 public:
  Dog();
  void bark();
};

#endif  // DOG_H_
