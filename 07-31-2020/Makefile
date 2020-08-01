all: exceptions1 template1

exceptions1: exceptions1.o
	g++ -o $@ $<

template1: template1.o
	g++ -o $@ $<

clean:
	rm -f exceptions? template? *.o