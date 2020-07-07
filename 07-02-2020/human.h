#ifndef HUMAN_H__
#define HUMAN_H__

#include <string>
#include "animal.h"

class Human : Animal {
 public:
  Human();
  std::string sound();
};

#endif  // HUMAN_H__