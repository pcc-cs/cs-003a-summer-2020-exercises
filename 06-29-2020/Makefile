all: vector1 pointers1 pointers2

vector1: vector.h vector.o vector1.o
	g++ -o $@ $^

.cpp.o:
	g++ -c $<

clean:
	rm -f *.o vector1 pointers?
