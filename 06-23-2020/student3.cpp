#include <iostream>
#include "student.h"

int main() {
  Student sa = {.lastName="Lee", .studentId=334987};
  sa.print();

  Student sb = {"David", "Ortiz", 443987};
  sb.print();
}
