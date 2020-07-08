#include <iostream>
#include <string>

class Color {
 private:
  double _red, _green, _blue;

 public:
  Color(double, double, double);
  std::string toString() const;
};

Color::Color(double red, double green, double blue) : _red(red), _green(green), _blue(blue) {
}

std::string Color::toString() const {
  return "(" + std::to_string(_red) + ", " + std::to_string(_green) + ", " + std::to_string(_blue) + ")";
}

int main() {
  Color c1(0.1, 0.3, 0.7);
  std::cout << "c1 = " << c1.toString() << std::endl;
}
