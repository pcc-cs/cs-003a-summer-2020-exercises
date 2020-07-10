all: operator1 operator2 operator3

operator1: operator1.o
	g++ -o $@ $^

operator2: operator2.o complex.o
	g++ -o $@ $^

operator3: operator3.o complex.o
	g++ -o $@ $^

clean:
	rm -f operator? *.o