#include <cstdio>
#include <iostream>

#define DUMP(a, b) (std::cout << a << ", " << b << std::endl)

/**
 * swap1() swaps the two arg values.
 * a, b: values to swap (int)
 */
void swap1(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

/**
 * swap2() swaps the two arg values.
 * a, b: values to swap (int pointers)
 */
void swap2(int *ap, int *bp) {
  int temp = *ap;
  *ap = *bp;
  *bp = temp;
}

/**
 * swap3() also swaps the two arg values,
 * but allows arbitrary type parameters.
 * a, b: values to swap (any type)
 */
template <class T>
void swap3(T *ap, T *bp) {
  T temp = *ap;
  *ap = *bp;
  *bp = temp;
}

int main() {
  int x = 100, y = 200;
  std::string a = "foo", b = "bar";

  // Swap using pass by reference
  std::cout << "swap1()" << std::endl;
  DUMP(x, y);
  swap1(x, y);
  DUMP(x, y);

  // Swap using pointers
  std::cout << "swap2()" << std::endl;
  DUMP(x, y);
  swap2(&x, &y);
  DUMP(x, y);

  // Template used to swap two int values
  std::cout << "swap3()" << std::endl;
  DUMP(x, y);
  swap3(&x, &y);
  DUMP(x, y);

  // Same template implementation used to swap two std::string values
  std::cout << "swap3()" << std::endl;
  DUMP(a, b);
  swap3(&a, &b);
  DUMP(a, b);
}