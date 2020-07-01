#include "person.h"

void Person::setHeight(double h) {
  if (h > 4.0 && h < 8.0) {
    _height = h;
  }
}

void Person::setWeight(double w) {
  if (w > 40 && w < 400) {
    _weight = w;
  }
}

double Person::getHeight() {
  return _height;
}

double Person::getWeight() {
  return _weight;
}
