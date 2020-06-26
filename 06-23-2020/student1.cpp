#include <iostream>
#include "student.h"

int main() {
  Student sa = {"Ling", "Li", 26431};
  std::cout << sa.firstName << " " << sa.lastName << " [" << sa.studentId << "]" << std::endl;
}
