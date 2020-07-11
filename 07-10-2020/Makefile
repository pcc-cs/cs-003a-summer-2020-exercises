all: operator1 array1

operator1: operator1.o complex.o complex.h
	g++ -o $@ $^

array1: array1.o room.o room.h
	g++ -o $@ $^
	
clean:
	rm -f operator1 *.o