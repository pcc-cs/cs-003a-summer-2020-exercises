#include <iostream>
#include "student.h"

void Student::print() {
  if (!firstName.empty()) {
    std::cout << firstName << " ";
  }
  std::cout << lastName << " [" << studentId << "]" << std::endl;
}