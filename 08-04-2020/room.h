#ifndef ROOM_H_
#define ROOM_H_

template <class T, class U>
class Room {
 private:
  int _cap;
  T *_students;
  U _teacher;
  int _next;

 public:
  /**
   * Needs default constructor for T.
   */
  Room(int cap) : _cap(cap), _students(new T[cap]) {
    _next = 0;
  }

  ~Room() {
    delete[] _students;
  }

  void setTeacher(const U &teacher) {
    _teacher = teacher;
  }

  /**
   * Ignore if out of bounds
   * - student: Student to add, by reference
   */
  void add(const T &student) {
    // Always check for bounds before accessing!
    if (_next < _cap) {
      _students[_next++] = student;
    }
  }

  int cap() {
    return _cap;
  }

  int size() {
    return _next;
  }
};

#endif  // ROOM_H_