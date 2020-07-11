/**
 * Room with students dynamically allocated.
 *
 * Copyright (c) 2020, Sekhar Ravinutala.
 */
#ifndef ROOM_H_
#define ROOM_H_

#include <string>

class Room {
 private:
  int _cap, _count;
  std::string *_students;

 public:
  Room();
  Room(int);
  Room(Room &);
  ~Room();
  Room &operator=(Room &);
  bool add(std::string);
  int count();
};

#endif  // ROOM_H_