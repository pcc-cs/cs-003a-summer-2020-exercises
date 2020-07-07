#include <string>
#include <cstdio>
#include "cat.h"

Cat::Cat() : Animal(4) {
}

std::string Cat::sound() {
  char s[0x100];
  sprintf(s, "Animal with %d legs, says meiw", legs());
  return s;
}