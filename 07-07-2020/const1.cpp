#include <cstdio>
#include <string>

#define SIZE 100

// Can't change these values
const int hex = 0x10;
const int octal = 010;
const int binary = 0b10;

std::string add(const std::string a, const std::string b) {
  return a+b;
}

int add(const int &a, const int &b) {
  return a+b;
}

double add(const double *ap, const double *bp) {
  return *ap+*bp;
}

int main() {
  printf("0x10 = %d\n", hex);
  printf("010 = %d\n", octal);
  printf("0b10 = %d\n", binary);

  char cp1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  cp1[0] ='J';
  printf("cp1 = %s\n", cp1);

  const char *cp2 = "Hello";
  // Can't do: cp2[0] = 'J';
  cp2 = cp1;
  printf("cp2 = %s\n", cp2);

  char *const cp3 = cp1;
  // Can't do: cp3 = cp2;
  cp3[4] = '\0';
  printf("cp3 = %s\n", cp3);

  const char *const cp4 = cp1;
  // Can't change either the pointer or the memory

  printf("\"foo\"+\"bar\" = %s\n", add("foo", "bar").c_str());

  int a = 10, b = 20;
  printf("%d + %d = %d\n", a, b, add(a, b));

  double x = 1.2, y = 2.4;
  printf("%.1f + %.1f = %.1f\n", x, y, add(&x, &y));

  printf("SIZE = %d\n", SIZE);
}
