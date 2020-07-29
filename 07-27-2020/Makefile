all: vector1 vector2

vector1: vector1.o
	g++ -o $@ $<

vector2: vector2.o
	g++ -o $@ $<

clean:
	rm -f vector? *.o