#include <string>
#include "human.h"

Human::Human() : Animal(2) {
}

std::string Human::sound() {
  return "Speak";
}