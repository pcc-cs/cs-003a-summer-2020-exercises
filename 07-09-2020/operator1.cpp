#include <iostream>
#include <string>

class Concat {
 private:
  std::string _value;

 public:
  Concat(const char *);
  Concat operator<<(const char *);
  std::string value();
  void set(const char *);
};

Concat::Concat(const char *s) : _value(s) {
}

Concat Concat::operator<<(const char *s) {
  _value += s;
  return *this;
}

std::string Concat::value() {
  return _value;
}

void Concat::set(const char *s) {
  _value = s;
}

int main() {
  int int1 = 100;
  std::string string1 = "Hello";
  std::cout << int1 << ", " << string1 << std::endl;

  Concat c1 = "Hello";
  Concat c2 = c1 << ", world";
  std::cout << c1.value() << "; " << c2.value() << std::endl;

  c1.set("Hi");
  std::cout << c1.value() << "; " << c2.value() << std::endl;
}