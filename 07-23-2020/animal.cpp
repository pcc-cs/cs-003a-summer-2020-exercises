#include <string>

#include "animal.h"

Animal::Animal(int legs) : _legs(legs) {
}

int Animal::legs() {
  return _legs;
}

bool Animal::isBiped() {
  return _legs == 2;
}

void Animal::dump() {
  printf("Legs:\t%d\nSound: %s\n", _legs, sound().c_str());
}

Animal::~Animal() {
  printf("The animal is dead!\n");
}