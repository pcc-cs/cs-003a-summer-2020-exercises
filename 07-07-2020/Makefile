all: const1 const2

const1: const1.o
	g++ -o $@ $^

const2: const2.o
	g++ -o $@ $^

clean:
	rm -f const? *.o