#include <algorithm>
#include <cstdio>
#include <vector>

#define IN(v, val) (std::find(v.begin(), v.end(), val) != v.end())
#define MSG(b) (printf(b ? "PRESENT\n" : "NOT PRESENT\n"))

/**
 * Not good (IMHO) because the caller has no idea
 * you might change the value of x (unless he checks the docs).
 */
void incWithReference(int &x) {
  ++x;
}

/**
 * Preferred because it's clear the value could be changed.
 */
void incWithPointer(int *xp) {
  ++*xp;
}

/**
 * Not ideal because We're redefining a standard library function
 * here, better use the library instead.
 */
bool find(std::vector<int> v, int val) {
  for (int x : v) {
    if (x == val) {
      return true;
    }
  }
  return false;
}

int main() {
  // Increment
  int x = 100;
  incWithPointer(&x);
  printf("x = %d\n", x);

  // We will come back to this in STL
  std::vector<int> v1 = {10, -24, 200, 1};

  // Linear search
  int val;
  printf("val: ");
  scanf("%d", &val);
  MSG(IN(v1, val));

  // Sort using lambda comparator
  std::sort(v1.begin(), v1.end(), [](int a, int b) {
    return a > b;
  });
  for (int i = 0; i < v1.size(); i++) {
    printf("%s%d%s", i == 0 ? "{" : "", v1[i], i == v1.size()-1 ? "}\n" : ", ");
  }
}