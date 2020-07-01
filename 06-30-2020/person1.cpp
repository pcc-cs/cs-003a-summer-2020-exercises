#include <cstdio>
#include "person.h"

int main() {
  Person p1;
  p1.setHeight(10);
  p1.setWeight(-10);
  printf("height: %.1f, weight: %.1f\n",
    p1.getHeight(), p1.getWeight());
  
  p1.setHeight(5.8);
  p1.setWeight(110);
  printf("height: %.1f, weight: %.1f\n",
    p1.getHeight(), p1.getWeight());
}
