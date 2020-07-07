#include "animal.h"

Animal::Animal(int legs) : _legs(legs) {
}

int Animal::legs() {
  return _legs;
}

bool Animal::isBiped() {
  return _legs == 2;
}