#include <set>
#include <cstdio>

int main() {
  // Direct initialization
  std::set<int> s1 = {10, 20, 30};
  for (int n : s1) {
    printf("%d\n", n);
  }

  // Basic ops
  s1.insert(15);
  s1.erase(20);
  for (int n : s1) {
    printf("%d\n", n);
  }

  // Find element #1
  int key = 30;
  if (s1.find(key) != s1.end()) {
    printf("Found %d\n", key);
  }

  // Find element #2
  if (s1.count(key) > 0) {
    printf("Found %d\n", key);
  }

  // Find element #3, only in C++20
  if (s1.contains(key)) {
    printf("Found %d\n", key);
  }
}