all: class1

class1: class1.o animal.o cat.o human.o siamese.o persian.o
	g++ -o $@ $^

animal.o: animal.h

cat.o: cat.h animal.h

human.o: human.h animal.h

siamese.o: siamese.h cat.h animal.h

persian.o: persian.h cat.h animal.h

clean:
	rm -f *.o class1