#include <string>

class Complex {
 private:
  double _real, _imaginary;

 public:
  Complex(double, double);
  void scale(double);
  virtual double real();
  virtual double imaginary();
  std::string realAsString();
  std::string imaginaryAsString();
  void setReal(double);
  void setImaginary(double);
};
