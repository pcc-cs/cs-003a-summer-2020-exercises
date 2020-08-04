all: template1 template2

template1: template1.o
	g++ -o $@ $<

template2: template2.o
	g++ -o $@ $<

clean:
	rm -f template? *.o