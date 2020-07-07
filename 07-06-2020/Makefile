all: class1 friend1

class1: class1.o dog.o animal.o
	g++ -o $@ $^

friend1: friend1.o animal.o student.o
	g++ -o $@ $^

clean:
	rm -f class1 friend1 *.o