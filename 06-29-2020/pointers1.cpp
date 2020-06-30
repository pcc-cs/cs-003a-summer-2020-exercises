#include <cstdio>

int i = 10;
float f = 2.5;
const char *s = "hello";

int main() {
  int *p1 = &i;
  float *p2 = &f;
  const char *p3 = s;
  printf("p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

  printf("i = %d, f = %.1f, s = %s\n", i, f, s);

  char t[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char *p4 = t;
  printf("i = %d, f = %.1f, s = %s, t = %s\n", i, f, s, t);

  int a = 10;
  printf("a = %d\n", a++);
  printf("a = %d\n", a);

  *p1 = 100;
  (*p2)++;
  *p4 = 'j';
  printf("i = %d, f = %.1f, s = %s, t = %s\n", i, f, s, t);
}