/**
 * Room implementation.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <iostream>
#include <string>
#include "room.h"

Room::Room() {
}

Room::Room(int cap) : _cap(cap) {
  _count = 0;
  _students = new std::string[cap];
  std::cout << "Room()" << std::endl;
}

Room::Room(Room &r) {
  // Using the copy constructor logic
  *this = r;
}

Room::~Room() {
  delete [] _students;
  std::cout << "~Room()" << std::endl;
}

Room &Room::operator=(Room &r) {
  std::cout << "operator==()" << std::endl;
  _cap = r._cap;
  _count = r._count;
  _students = new std::string[_cap];
  for (int i = 0; i < _count; i++) {
    _students[i] = r._students[i];
  }
  return *this;
}

bool Room::add(std::string student) {
  if (_count == _cap) {
    return false;
  }
  _students[_count++] = student;
  return true;
}

int Room::count() {
  return _count;
}