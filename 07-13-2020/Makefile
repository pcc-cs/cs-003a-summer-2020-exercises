all: namespace1 namespace2

namespace1: namespace1.o complex.o
	g++ -o $@ $^

namespace2: namespace2.o complex.o
	g++ -o $@ $^

namespace1.o namespace2: complex.h

clean:
	rm -f namespace? *.o