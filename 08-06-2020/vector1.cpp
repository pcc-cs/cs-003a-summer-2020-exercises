#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#define HAS(v, s) (std::find(v.begin(), v.end(), s) != v.end())

int main() {
  std::vector<std::string> names;

  for (int i = 0; i < 5; i++ ) {
    std::cout << "Size: " << names.size() << ", Capacity: " << names.capacity() << std::endl;
    names.push_back("Index-" + std::to_string(i+1));
  }

  auto it1 = names.begin();
  auto it2 = names.end();

  // Iterator arithmetic
  std::cout << std::endl;
  for (auto it = names.begin(); it != names.end(); it++) {
    std::cout << *it << std::endl;
  }

  // Simpler, directly get values, but no index
  std::cout << std::endl;
  for (auto &name : names) {
    name += ".";
    std::cout << name << std::endl;
  }

  // You get both index and value, can edit values
  std::cout << std::endl;
  for (int i = 0; i < names.size(); i++) {
    names[i] += "!";
    std::cout << names[i] << std::endl;
  }

  // Reverse iterators
  std::cout << std::endl;
  for (auto it = names.rbegin(); it != names.rend(); it++) {
    std::cout << *it << std::endl;
  }

  // Sort
  std::sort(names.begin(), names.end(), [](std::string s1, std::string s2) {
    return s1 > s2;
  });
  std::cout << std::endl;
  for (auto name : names) {
    std::cout << name << std::endl;
  }

  // Search
  std::cout << std::endl;
  std::string s;
  std::cout << "String to search: ";
  std::cin >> s;
  std::cout << s;
  if (HAS(names, s)) {
    std::cout << " found!" << std::endl;
  } else {
    std::cout << " not found!" << std::endl;
  }
}