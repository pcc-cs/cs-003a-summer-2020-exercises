/**
 * Testing namespaces.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>

#include "./complex.h"

namespace A {
int i = 10;

class Foo {
 public:
  void dump() {
    printf("I am foo()\n");
  }
};
}

namespace B {
int i = 100;
}

namespace C {
void dumpI() {
  i.dump();
}
}

namespace {
int i = 1000;
}

int main() {
  printf("A::i = %d\n", A::i);
  A::Foo().dump();

  printf("B::i = %d\n", B::i);

  C::i.dump();

  C::dumpI();

  printf("i = %d\n", i);
}
