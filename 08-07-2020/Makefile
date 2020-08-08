all: vector1 tuple1 set1 map1

vector1: vector1.o
	g++ -o $@ $<

tuple1: tuple1.o
	g++ -o $@ $<

set1: set1.o
	g++ -o $@ $<

# Use C++20 to handle contains()
set1.o: set1.cpp
	g++ --std=c++20 -c $<

map1: map1.o
	g++ -o $@ $<

clean:
	rm -f vector? tuple? set? map? *.o