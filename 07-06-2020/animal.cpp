#include "animal.h"

Animal::Animal(int legs) : _legs(legs), _weight(0) {
}

int Animal::legs() {
  return _legs;
}

bool Animal::isBiped() {
  return _legs == 2;
}