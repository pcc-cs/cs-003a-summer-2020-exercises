/**
 * Recursion examples.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <chrono>
#include <iostream>

// Stuff to measure time
typedef std::chrono::steady_clock::time_point point;
#define now() std::chrono::steady_clock::now()
#define diff(a, b) std::chrono::duration_cast<std::chrono::nanoseconds>(b - a)

// Naive approach, exponential time complexity
int64_t fib1(int i) {
  return i < 2 ? i : fib1(i - 1) + fib1(i - 2);
}

// Using memoization, linear time complexity
int64_t fib2Values[0x40];
int64_t fib2(int i) {
  if (i < 2) {
    return i;
  }
  if (fib2Values[i] == 0) {
    fib2Values[i] = fib2(i - 1) + fib2(i - 2);
  }
  return fib2Values[i];
}

// Notice how we passed the entire function as a parameter
void measure(int64_t (*fib)(int), int n) {
  point a;
  int64_t f;
  for (int i = 0; i < n; i++) {
    a = now();
    f = fib(i);
    printf("%-3d%-10ld%-10ld\n", i, f, diff(a, now()));
  }
}

int main() {
  int n;
  std::cin >> n;

  // Measure times for fib1(), will be exponential
  measure(fib1, n);

  // Do the same for fib2(), notice the difference in times
  measure(fib2, n);
}