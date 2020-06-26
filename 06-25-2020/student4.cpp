#ifndef STUDENT_H_
#define STUDENT_H_

#include "student.h"

int main() {
  Student sa = {"Lisa", "Connolly", 332876};
  sa.print();

  Student sb = {"Jim", "Beard", 992876};
  Student *sbp = &sb;
  sbp->print();
}

#endif  // STUDENT_H_