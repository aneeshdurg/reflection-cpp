all: reflection bar.o foo.o printObject.o

printObject.o: printObject.cpp printObject.h
	clang++ -c printObject.cpp -o printObject.o

foo.o: foo.cpp foo.h
	clang++ -c foo.cpp -o foo.o

bar.o: bar.cpp bar.h
	clang++ -c bar.cpp -o bar.o

reflection: reflection.cpp foo.o bar.o printObject.o
	clang++ reflection.cpp foo.o bar.o printObject.o -o reflection

clean:
	rm -rf printObject.o foo.o bar.o reflection
