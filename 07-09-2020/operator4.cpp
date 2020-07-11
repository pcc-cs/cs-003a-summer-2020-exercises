#include <iostream>
#include "complex.h"

std::ostream operator<<(std::ostream os, Complex c) {
  char buf[0x100];
  sprintf(buf, "(%.1f, %.1f)", c.real(), c.imaginary());
  return os << buf;
}

int main() {
  Complex c1(1, 2);
  Complex c2(3, 4);
  Complex c3 = c1 + c2;
  std::cout << c1 << " + " << c2 << " = " << c3 << std::endl;
}