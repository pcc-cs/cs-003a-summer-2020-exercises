all: exceptions1 exceptions2

exceptions1: exceptions1.o
	g++ -o $@ $<

exceptions2: exceptions2.o
	g++ -o $@ $<

clean:
	rm -f exceptions1 *.o