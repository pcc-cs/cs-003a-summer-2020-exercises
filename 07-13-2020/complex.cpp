/**
 * Demonstrating copyright. This file implements the complex
 * number with basic operations.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <string>
#include <cstdio>
#include "./complex.h"

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

Complex Complex::operator+(Complex c) {
  return Complex(_real + c._real, _imaginary + c._imaginary);
}

Complex Complex::operator-(Complex c) {
  return Complex(_real - c._real, _imaginary - c._imaginary);
}

Complex Complex::operator++() {
  _real++;
  return *this;
}

Complex Complex::operator++(int) {
  Complex old = *this;
  ++_real;
  return old;
}

void Complex::dump() {
  printf("(%.1f, %.1f)\n", _real, _imaginary);
}
