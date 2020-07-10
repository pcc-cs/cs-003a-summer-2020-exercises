#include <cstdio>
#include "complex.h"

int main() {
  Complex c1(1, 2);
  Complex c2(3, 4);
  Complex c3 = c1 + c2;
  printf("(%.1f, %.1f) + (%.1f, %.1f) = (%.1f, %.1f)\n",
    c1.real(), c1.imaginary(),
    c2.real(), c2.imaginary(),
    c3.real(), c3.imaginary());

  c3 = c1 - c2;
  printf("(%.1f, %.1f) - (%.1f, %.1f) = (%.1f, %.1f)\n",
    c1.real(), c1.imaginary(),
    c2.real(), c2.imaginary(),
    c3.real(), c3.imaginary());
}