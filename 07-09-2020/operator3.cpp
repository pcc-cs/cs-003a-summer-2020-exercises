#include <cstdio>
#include "complex.h"

int main() {
  Complex c1(2, 3);
  
  c1.dump();
  (++c1).dump();
  c1.dump();
  (c1++).dump();
  c1.dump();
}