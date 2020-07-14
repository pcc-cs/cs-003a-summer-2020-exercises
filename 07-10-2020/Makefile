all: operator1 array1

operator1: operator1.o complex.o
	g++ -o $@ $^

operator1.o complex.o: complex.h

array1: array1.o room.o
	g++ -o $@ $^

array1.o room.o: room.h

clean:
	rm -f operator1 *.o