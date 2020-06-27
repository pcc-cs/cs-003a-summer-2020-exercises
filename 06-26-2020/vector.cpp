#include <cmath>
#include <cstdio>
#include "vector.h"

Vector::Vector() {
}

Vector::Vector(double ab) {
  x = y = ab;
}

Vector::Vector(double a, double b) : x(a), y(b) {
}

void Vector::setX(double a) {
  x = a;
}

void Vector::setY(double b) {
  y = b;
}

double Vector::value() {
  return sqrt(x*x + y*y);
}

Vector Vector::add(Vector v) {
  return Vector(x+v.x, y+v.y);
}

void Vector::dump() {
  printf("Vector(%.1f, %.1f)\n", x, y);
}
