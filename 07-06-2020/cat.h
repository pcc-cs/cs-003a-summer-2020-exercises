#ifndef CAT_H__
#define CAT_H__

#include <string>
#include "animal.h"

class Cat : protected Animal {
 public:
  Cat();
  std::string sound();
};

#endif  // CAT_H__