all: list1

list1: list1.o list.o
	g++ --std=c++17 -o $@ $^

list1.o list.o: list.h

clean:
	rm list1 *.o

