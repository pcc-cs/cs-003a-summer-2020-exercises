#include "vector.h"

int main() {
  Vector v1;
  v1.dump();

  // Try to avoid this!
  Vector v2 = 10;
  v2.dump();

  Vector v3 = Vector(2.4);
  v3.dump();

  Vector v4 = Vector(3, 4);
  v4.dump();

  Vector v5(1, 2);
  v5.dump();

  Vector v6 = {2, 4};
  v6.dump();
}