#include <cstdio>
#include <string>

#include "room.h"

class Student {
 private:
  std::string _firstName;
  std::string _lastName;

 public:
  Student() {
  }

  Student(std::string fn, std::string ln) : _firstName(fn), _lastName(ln) {
  }
};

class Teacher : public Student {
};

int main() {
  Room<Student, Teacher> room(0x10);
  room.add(Student("Jimmy", "Neutron"));
  room.add(Student("Amy", "Winehouse"));
  printf("room.cap() = %d, room.size() = %d\n", room.cap(), room.size());
}