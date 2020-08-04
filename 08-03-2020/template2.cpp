#include <iostream>
#include <string>
#include <stdexcept>

// Supports arbitrary types instead of just int
template <class T>
class Array {
 private:
  int _size;
  T *_array;

 public:
  Array(int);
  ~Array();
  T get(int);
  void set(int, T);
};

template <class T>
Array<T>::Array(int size) : _size(size), _array(new T[size]) {
}

template <class T>
Array<T>::~Array() {
  delete[] _array;
}

template <class T>
T Array<T>::get(int index) {
  // We can control the behavior for out-of-bounds indeces
  if (index < 0 || index >= _size) {
    throw std::out_of_range("index out of bounds");
  }
  return _array[index];
}

template <class T>
void Array<T>::set(int index, T value) {
  if (index < 0 || index >= _size) {
    throw std::out_of_range("index out of bounds");
  }
  _array[index] = value;
}

int main() {
  // Version with int values
  Array<int> a1(0x10);
  try {
    a1.set(2, 100);
    std::cout << a1.get(2) << std::endl;

    a1.set(0x10, 100);
    std::cout << a1.get(0x10) << std::endl;
  } catch (std::out_of_range e) {
    fprintf(stderr, "%s\n", e.what());
  }
  
  // Version with std::string values
  Array<std::string> a2(0x10);
  try {
    a2.set(2, "foo");
    std::cout << a2.get(2) << std::endl;

    a2.set(0x10, "bar");
    std::cout << a2.get(0x10) << std::endl;
  } catch (std::out_of_range e) {
    fprintf(stderr, "%s\n", e.what());
  }
}