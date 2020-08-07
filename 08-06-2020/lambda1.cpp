#include <cstdio>

int main() {
  int x = 100;
  // Value of x is frozen inside fn()
  auto fn = [x]() {
    printf("x = %d\n", x);
  };
  x = 200;
  fn();
}