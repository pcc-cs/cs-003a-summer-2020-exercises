#include <cstdio>
#include "vector.h"

int main() {
  double a, b;

  // Read a and b
  printf("a, b: ");
  scanf("%lf, %lf", &a, &b);

  // Print value
  Vector v1(a, b);
  printf("Vector(%.1f, %.1f): %.1f\n", a, b, v1.value());

  // Double coords and print value
  a += a;
  b += b;
  Vector v2(a, b);
  printf("Vector(%.1f, %.1f): %.1f\n", a, b, v2.value());

  // Add and print value
  Vector v3 = v1.add(v2);
  printf("v3: %.1f\n", v3.value());
}
