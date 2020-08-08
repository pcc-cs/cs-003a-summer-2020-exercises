#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <cstdio>
#include <cstring>

#define FN(s) (strtok((char *) s.name().c_str(), " "))
#define EQ(s1, s2) (strcmp(s1, s2) == 0)

class Student {
 private:
  int _id;
  std::string _name;

 public:
  explicit Student(std::string name): _id(rand()), _name(name) {
  }
  std::string name() const {
    return _name;
  }
  bool operator==(const Student &s) const {
    return _name == s._name;
  }
};

int main() {
  Student s1 = Student("Lisa Connolly");
  Student s2 = Student("Jim Fellow");
  Student s3 = Student("Kim Chang");
  std::vector<Student> students = {s1, s2, s3};
  auto report = [](std::string name, bool found) {
    printf("%s ", name.c_str());
    if (found) {
      printf("found!\n");
    } else {
      printf("not found!\n");
    }
  };

  // Look for Kim Chang
  auto res1 = std::find(students.begin(), students.end(), s2);
  report(s2.name(), res1 != students.end());

  // Custom find, only compare first name
  auto res2 = std::find_if(students.begin(), students.end(), [s2](Student s) {
    return EQ(FN(s), FN(s2));
  });
  report(s2.name(), res2 != students.end());
}