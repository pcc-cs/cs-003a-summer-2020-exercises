#include <map>
#include <string>
#include <cstdio>

int main() {
  std::map<std::string, double> heights = {
    {"Brian", 5.9},
    {"Jena", 5.3},
  };
  auto check = [](std::map<std::string, double> heights, std::string name) {
    if (heights.find(name) != heights.end()) {
      printf("Found %s\n", name.c_str());
    } else {
      printf("Didn't find %s\n", name.c_str());
    }
  };

  // Access values like a regular array
  std::string name1 = "Jena";
  printf("%s's height: %.1f feet\n", name1.c_str(), heights[name1]);

  // Entries are automatically added
  std::string name2 = "Kim";
  heights[name2] = 6.1;
  printf("%s's height: %.1f feet\n", name2.c_str(), heights[name2]);

  // Find
  check(heights, name2);

  // Erase
  heights.erase(name2);
  check(heights, name2);
}