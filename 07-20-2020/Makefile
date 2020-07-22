all: list1

list1: list1.o list.o
	g++ -o $@ $^

list1.o list.o: list.h

clean:
	rm -f list1 *.o