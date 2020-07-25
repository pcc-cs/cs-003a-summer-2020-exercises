#include <cstdio>

// Macro, simply replaces the code while pre-processing
#define SUM(a, b) ((a < 0 || b < 0) ? 0 : a + b)

// Size of array
#define SIZE(a) (sizeof(a) == 0 ? 0 : sizeof(a) / sizeof(a[0]))

// Only sums non negative values
int sum(int a, int b) {
  if (a < 0 || b < 0) {
    return 0;
  }
  return a + b;
}

typedef int (*sum_t)(int, int);
void printSums(int aa[], int ba[], int n, sum_t s) {
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("%d + %d = %d\n", aa[i], ba[i], s(aa[i], ba[i]));
  }
}

int main() {
  int a = 10, b = 20;
  sum_t s = [](int x, int y) {
    if (x < 0 || y < 0) {
      return 0;
    }
    return x + y;
  };

  printf("%d + %d = %d\n", a, b, SUM(a, b));
  printf("%d + %d = %d\n", a, b, sum(a, b));
  printf("%d + %d = %d\n", a, b, s(a, b));

  int aa[] = {0, -10, 20, 5, 10};
  int ba[] = {10, -5, -15, 10, 0};
  printf("\nSize of aa = %d, ba = %d\n", sizeof(aa), sizeof(ba));
  printSums(aa, ba, SIZE(aa), sum);
  printSums(aa, ba, SIZE(aa), s);
  printSums(aa, ba, SIZE(aa), [](int x, int y) {
    return x + y;
  });
}