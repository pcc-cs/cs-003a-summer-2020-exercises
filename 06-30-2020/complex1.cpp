#include <cstdio>
#include "complex.h"

int main() {
  Complex c1(3, 4);
  c1.scale(2);
  printf("c1 = (%.1f, %.1f)\n", c1.real(), c1.imaginary());
  printf("c1 = (%s, %s)\n",
    c1.realAsString().c_str(), c1.imaginaryAsString().c_str());
}
