all: vector1 vector2

vector1: vector.h vector.o vector1.o
	g++ -o $@ $^

vector2: vector.h vector.o vector2.o
	g++ -o $@ $^

.cpp.o:
	g++ -c $<

clean:
	rm vector1 *.o
