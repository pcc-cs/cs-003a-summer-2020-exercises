#ifndef VECTOR_H_
#define VECTOR_H_

class Vector {
 private:
  double x;
  double y;

 public:
  Vector();
  explicit Vector(double);
  Vector(double, double);
  void setX(double);
  void setY(double);
  double value();
  Vector add(Vector v);
  void dump();
};

#endif  // VECTOR_H_
