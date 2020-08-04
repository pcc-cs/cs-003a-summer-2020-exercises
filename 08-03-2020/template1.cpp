#include <cassert>
#include <iostream>
#include <stdexcept>

class Array {
 private:
  int _size;
  int *_array;

 public:
  Array(int);
  ~Array();
  int get(int);
  void set(int, int);
};

Array::Array(int size) : _size(size), _array(new int[size]) {
}

Array::~Array() {
  delete[] _array;
}

int Array::get(int index) {
  // We can control the behavior for out-of-bounds indeces
  assert(index >= 0 && index < _size);
  return _array[index];
}

void Array::set(int index, int value) {
  if (index < 0 || index >= _size) {
    throw std::out_of_range("index out of bounds");
  }
  _array[index] = value;
}

int main() {
  Array a1(0x10);
  try {
    a1.set(2, 100);
    std::cout << a1.get(2) << std::endl;

    a1.set(0x10, 100);
    std::cout << a1.get(0x10) << std::endl;
  } catch (std::out_of_range e) {
    fprintf(stderr, "%s\n", e.what());
  }
}