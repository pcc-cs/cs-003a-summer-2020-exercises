#include <string>
#include <cstdio>
#include "siamese.h"

std::string Siamese::sound() {
  char s[0x100];
  sprintf(s, "Animal is '%s', says miew", biped(isBiped()));
  return s;
}