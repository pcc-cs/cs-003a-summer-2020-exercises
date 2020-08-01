#include <cstdio>
#include <exception>

class Panic {
 private:
  const char *_msg;

 public:
  Panic(const char *m) : _msg(m) {
  }
  const char *msg() {
    return _msg;
  }
};

// Enumerated constants
enum class Error {
  NEGATIVE_ARG,
  MEMORY_ERROR  // Not being used
};

/**
 * check() verifies that the arg is non-negative, throws Error
 * if it is.
 */
void check(int x) {
  if (x < 0) {
    throw Error::NEGATIVE_ARG;
  }
}

/**
 * sub() subtracts second arg from first arg and returns the difference.
 * Both should be non-negative and first arg should not be smaller than
 * the second. Throws Error if either is -ve, const char * if second arg larger.
 * - a: Non negative int
 * - b: Non negative int, <= b
 */
int sub(int a, int b) {
  // Error exception from check() is not caught, propagated to caller
  check(a);
  check(b);
  if (a < b) {
    throw Panic("first arg should be bigger");
  }
  return a-b;
}

int main() {
  int a, b;
  printf("a, b: ");
  scanf("%d, %d", &a, &b);

  try {
    std::set_terminate([]() {
      printf("Whatever\n");
    });
    printf("%d - %d = %d\n", a, b, sub(a, b));
  } catch (Error e) {
    printf("error %s\n", e);
  }
}