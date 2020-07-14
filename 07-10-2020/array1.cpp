#include <iostream>
#include "room.h"

int main() {
  Room *r1p = new Room(5);
  std::string sp = "Student";
  for (int i = 1; i <= 7; i++) {
    std::string s = sp + std::to_string(i);
    if (r1p->add(s)) {
      std::cout << "Added " << s << std::endl;
    } else {
      std::cout << "Couldn't add " << s << std::endl;
    }
  }
  
  /**
   * Without the assignment overloading, program will call destructor
   * on automatic variable r2 after main() ends, causing a
   * second free() on the same memory area pointed to by
   * r2._students.
   */
  Room r2(1);
  r2 = *r1p;
  std::cout << "r2.count() = " << r2.count() << std::endl;

  // Error to access r1p after this!
  delete r1p;

  // Uses copy constructor
  Room r3 = r2;
  std::cout << "r3.count() = " << r3.count() << std::endl;

  std::cout << "Fin!" << std::endl;
}