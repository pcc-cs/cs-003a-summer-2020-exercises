
#include <string>
#include "complex.h"

Complex::Complex(double r, double i) : _real(r), _imaginary(i) {
}

void Complex::scale(double s) {
  _real *= s;
  _imaginary *= s;
}

double Complex::real() {
  return _real;
}

double Complex::imaginary() {
  return _imaginary;
}

std::string Complex::realAsString() {
  return std::to_string(_real);
}

std::string Complex::imaginaryAsString() {
  return std::to_string(_imaginary);
}