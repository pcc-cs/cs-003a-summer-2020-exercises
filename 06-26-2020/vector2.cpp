#include <cstdio>
#include "vector.h"

int main() {
  Vector v1;
  v1.dump();
  printf("v1.value(): %.1f\n", v1.value());

  v1.setX(1.2);
  v1.setY(2.1);
  v1.dump();
  printf("v1.value(): %.1f\n", v1.value());

  Vector v2(2.5);
  v2.dump();
  printf("v2.value(): %.1f\n", v2.value());
}
