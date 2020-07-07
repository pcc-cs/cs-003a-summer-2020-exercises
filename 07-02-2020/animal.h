#ifndef ANIMAL_H__
#define ANIMAL_H__

#define biped(b) (b ? "Biped" : "Not biped")

class Animal {
 private:
  int _legs;

 protected:
  int legs();

 public:
  Animal(int);
  bool isBiped();
};

#endif  // ANIMAL_H__