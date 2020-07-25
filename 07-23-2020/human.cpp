#include "human.h"

#include <cstdio>
#include <string>

Human::Human() : Animal(2) {
}

std::string Human::sound() {
  return "Speak";
}

Human::~Human() {
  printf("The human is dead!\n");
}