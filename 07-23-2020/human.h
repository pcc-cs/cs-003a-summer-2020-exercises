#ifndef HUMAN_H__
#define HUMAN_H__

#include <string>
#include "animal.h"

class Human : public Animal {
 public:
  Human();
  std::string sound();
  ~Human();
};

#endif  // HUMAN_H__