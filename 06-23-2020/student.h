#include <string>

struct Student {
  std::string firstName;
  std::string lastName;
  int studentId;

  void print() {
    if (!firstName.empty()) {
      std::cout << firstName << " ";
    }
    std::cout << lastName << " [ID: " << studentId << "]" << std::endl;
  }
};
