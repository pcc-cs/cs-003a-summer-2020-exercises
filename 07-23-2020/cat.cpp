#include "cat.h"

#include <cstdio>
#include <string>

Cat::Cat() : Animal(4) {
}

std::string Cat::sound() {
  return "Meiw";
}

Cat::~Cat() {
  printf("The cat is dead!\n");
}