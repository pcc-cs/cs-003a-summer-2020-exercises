#include <cstdio>

int main() {
  int a[] = {10, 20, 30};
  const char *s = "hello";

  printf("a = %p, s = %p\n", a, s);
  printf("a+1 = %p, s+1 = %p\n", a+1, s+1);
  printf("a[1] = %d, *(a+1) = %d\n", a[1], *(a+1));

  printf("&a = %p, &s = %p\n", &a, &s);
}
