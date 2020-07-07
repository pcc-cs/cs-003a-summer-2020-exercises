#ifndef ANIMAL_H__
#define ANIMAL_H__

#define biped(b) (b ? "Biped" : "Not biped")

class Animal {
 private:
  int _legs;
  double _weight = 0;
  friend class Student;
  friend void dumpAnimal(Animal);

 protected:
  int legs();

 public:
  Animal(int);
  bool isBiped();
};

#endif  // ANIMAL_H__