all: class1

class1: class1.o animal.o cat.o human.o siamese.o
	g++ -o $@ $^

animal.o:	animal.h

cat.o: cat.h

human.o: human.h

siamese.o: siamese.h

clean:
	rm -f *.o class1