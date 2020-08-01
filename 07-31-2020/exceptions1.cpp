#include <cstdio>
#include <string>
#include <stdexcept>

/**
 * sub() subtracts second arg from first arg and returns the difference.
 * Both should be non-negative and first arg should not be smaller than
 * the second. Throws std::out_of_range if either is -ve,
 * std::invalid_argument if second arg larger.
 * - a: Non negative int
 * - b: Non negative int, <= b
 */
int sub(int a, int b) {
  auto check = [](int x) {
    /**
     * CAUTION: Be sure that the buf contents are not used
     * after the function exits.
     */
    char buf[0x100];
    if (x < 0) {
      sprintf(buf, "%d: should be non-negative", x);
      /**
       * By using std::string, we ensure that the buffer
       * is copied into another location, so it is available
       * after the function returns.
       */
      throw std::out_of_range(std::string(buf));
    }
  };

  // Error exception from check() is not caught, propagated to caller
  check(a);
  check(b);
  if (a < b) {
    throw std::invalid_argument("first arg should be larger");
  }
  return a-b;
}

int main() {
  int a, b;
  printf("a, b: ");
  scanf("%d, %d", &a, &b);

  /**
   * The try block attempts to bulldoze through the code
   * and the catch blocks clean up if there is an exception.
   */
  try {
    printf("%d - %d = %d\n", a, b, sub(a, b));
    // Checked first
  } catch (std::out_of_range e) {
    printf("%s\n", e.what());
    // Catch-all: USE SPARINGLY!
  } catch (...) {
    /**
     * Don't ever write a catch-all without a logging or
     * reporting of some kind!
     */
    fprintf(stderr, "%d, %d: unknown exception\n", a, b);
  }
}