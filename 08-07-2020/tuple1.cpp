#include <iostream>
#include <string>
#include <tuple>

std::tuple<int, std::string, std::string> getStudent() {
  std::string fn, ln;

  // Read first name
  std::cout << "First name: ";
  std::cin >> fn;

  // Read last name
  std::cout << "Last name: ";
  std::cin >> ln;

  // Return tuple with generated id
  return {rand(), fn, ln};
}

int main() {
  auto s1 = getStudent();
  std::cout << "(" << std::get<0>(s1) << ", " << std::get<1>(s1) << " "
            << std::get<2>(s1) << ")" << std::endl;
}