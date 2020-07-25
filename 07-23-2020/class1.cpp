#include <iostream>
#include "animal.h"
#include "cat.h"
#include "human.h"
#include "siamese.h"
#include "persian.h"

#define msg(s) (std::cout << "\n*** " << s << " ***\n" << std::endl)

int main() {
  /**
   * These will be deleted using their destructors,
   * which in turn call the base class desructor(s)
   */
  Cat c1;
  Siamese s1;
  Persian p1;
  Human h1;

  /**
   * Inheritance:
   * a1, c1, s1, and h1 use their own sound() definitions
   * p1 inherits from Cat
   */
  std::cout << "c1: " << c1.sound() << std::endl;
  std::cout << "s1: " << s1.sound() << std::endl;
  std::cout << "p1: " << p1.sound() << std::endl;
  std::cout << "h1: " << h1.sound() << std::endl;

  msg("Polymorphism");

  // Polymorphism
  Animal *apa[] = {&c1, &s1, &p1, &h1};
  for (Animal *ap : apa) {
    ap->dump();
  }

  msg("Polymorphism with copy by reference");

  // Polymorphism with copy by reference also works
  Animal &a = c1;
  a.dump();

  msg("Virtual destructor");

  /**
   * Virtual destructor in play, completely different from
   * the default destructor calls for c1, s1, p1, and h1 above.
   */
  Animal *ap = new Cat();
  delete ap;

  /**
   * Destructors are called automatically on the above
   * automatic variables
   */
  msg("End, destructors called on automatic variables");
}