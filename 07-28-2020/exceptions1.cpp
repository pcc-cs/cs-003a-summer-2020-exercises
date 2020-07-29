#include <cassert>
#include <cmath>
#include <cstdio>

class Complex {
 private:
  double _real, _imaginary;

 public:
  Complex(double r, double i) : _real(r), _imaginary(i) {
  }
  double real() {
    return _real;
  }
  double imaginary() {
    return _imaginary;
  }
};

/**
 * root1() returns the positive square root
 * of the given number; -1 if the number is -ve.
 * NOT GOOD because -ve values are valid as square roots.
 * - x: Any double value
 */
double root1(double x) {
  if (x < 0) {
    return -1;
  }
  return sqrt(x);
}

/**
 * root2() returns the complex root of the given number,
 * with positive root value. OK because it's general,
 * but overkill for simple roots.
 * - x: Any double value
 */
Complex root2(double x) {
  if (x < 0) {
    return Complex(0, sqrt(-x));
  }
  return Complex(sqrt(x), 0);
}

/**
 * root3() returns the positive root of given number.
 * Throws a const char * exception if -ve.
 * - x: Any non-negative double value
 */
double root3(double x) {
  if (x < 0) {
    throw "Must be non-negative";
  }
  return sqrt(x);
}

int main() {
  // Read value
  double x;
  printf("x: ");
  scanf("%lf", &x);

  printf("root1(%.2lf) = %.2lf\n", x, root1(x));

  Complex r2 = root2(x);
  printf("root2(%.2lf) = Complex(%.2lf, %.2lf)\n", x, r2.real(), r2.imaginary());

  try {
    printf("root3(%.2lf) = %.2lf\n", root3(x));
  } catch (const char *e) {
    printf("%.2lf: %s\n", x, e);
  }
}