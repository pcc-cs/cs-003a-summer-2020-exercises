/**
 * Just reuising earlier code to try out formatting and linting.
 * 
 * Use the settings to use a style, like Google or WebKit. You can customize by extending
 * the style to suit your preferences.
 * 
 * And cpplint is a Python utility to check C++ code for style and possible errors that
 * regular compilers/IDEs may miss.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include "./complex.h"

#include <cstdio>
#include <string>

Complex::Complex(double r, double i) : _real(r), _imaginary(i) {
}

bool Complex::equal(Complex &c) {
  return _real == c._real && _imaginary == c._imaginary;
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

namespace C {
Complex i = Complex(0, 1);
}
