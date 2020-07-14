/**
 * Testing namespaces.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>
#include <iostream>

#include "./complex.h"

/**
 * Dont' do this.
 * using namespace C;
 */
using C::i;
using std::cout;

namespace C {
void dumpI() {
  i.dump();
}
}

int main() {
  i.dump();

  C::dumpI();
  cout << "using std::cout" << std::endl;
}
