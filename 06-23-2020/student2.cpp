#include <iostream>
#include "student.h"

/**
 * printStudent() prints student details.
 * - s: Student struct, must have lastName and studentId.
 */
void printStudent(Student s) {
  if (!s.firstName.empty()) {
    std::cout << s.firstName << " ";
  }
  std::cout << s.lastName << " [" << s.studentId << "]" << std::endl;
}

int main() {
  Student sa = {.lastName="Lee", .studentId=334987};
  printStudent(sa);

  Student sb = {"David", "Ortiz", 443987};
  printStudent(sb);
}
