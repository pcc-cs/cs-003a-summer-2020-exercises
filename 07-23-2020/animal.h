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
  virtual std::string sound() = 0;
  void dump();
  virtual ~Animal();
};

#endif  // ANIMAL_H__