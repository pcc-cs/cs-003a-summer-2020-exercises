all: template1

template1: template1.o
	g++ -o $@ $<

template1.o: room.h

clean:
	rm -f template? *.o