all: complex1 person1

complex1: complex1.o complex.o
	g++ -o $@ $^

person1: person1.o person.o
	g++ -o $@ $^

complex.o: complex.h

person.o: person.h

clean:
	rm -f complex1 person1 *.o
