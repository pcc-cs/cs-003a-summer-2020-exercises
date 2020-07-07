#include <iostream>
#include "animal.h"
#include "cat.h"
#include "human.h"
#include "siamese.h"

int main() {
  Animal a1(2);
  Cat c1;
  Human h1;
  Siamese s1;

  std::cout << "a1: " << biped(a1.isBiped()) << std::endl;
  std::cout << "c1: " << c1.sound() << std::endl;
  std::cout << "h1: " << h1.sound() << std::endl;

  std::cout << "s1: " << s1.sound() << std::endl;
}