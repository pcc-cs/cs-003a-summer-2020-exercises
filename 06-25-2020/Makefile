all: student4 vector1

student4: student.h student.o student4.o
	g++ -o $@ $^

vector1: vector.h vector.o vector1.o
	g++ -o $@ $^

clean:
	rm student4 *.o
