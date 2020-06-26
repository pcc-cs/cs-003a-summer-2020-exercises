#include <cmath>
#include "vector.h"

Vector::Vector(double a, double b) : x(a), y(b) {
}

double Vector::value() {
  return sqrt(x*x + y*y);
}
