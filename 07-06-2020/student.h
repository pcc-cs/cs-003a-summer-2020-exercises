/**
 * Student header.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "animal.h"

class Student {
 private:
  Animal _animal;

 public:
  explicit Student(Animal);
  void dumpData();
};

#endif  // STUDENT_H_
