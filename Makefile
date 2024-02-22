all: clean kdtree.o program 

program: kdtree.o main2.cc
	g++ -o program main2.cc kdtree.o

kdtree.o: 
	g++ -c  kdtree.cc

clean:
	rm -f *.o program


