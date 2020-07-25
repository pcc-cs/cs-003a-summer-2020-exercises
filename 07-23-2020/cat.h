#ifndef CAT_H__
#define CAT_H__

#include <string>
#include "animal.h"

class Cat : public Animal {
 public:
  Cat();
  std::string sound();
  ~Cat();
};

#endif  // CAT_H__