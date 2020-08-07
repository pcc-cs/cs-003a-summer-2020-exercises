all: vector1 lambda1

vector1: vector1.o
	g++ -o $@ $<

lambda1: lambda1.o
	g++ -o $@ $<

clean:
	rm -f vector? lambda? *.o