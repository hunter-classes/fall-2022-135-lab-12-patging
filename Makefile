#Patrick Ging Makefile


main: main.o vectors.o
	g++ -o main -std=c++11 main.o vectors.o

tests: tests.o vectors.o
	g++ -o tests -std=c++11 tests.o vectors.o

clean:
	rm tests main a.out *.o

#.o files

main.o: main.cpp vectors.cpp vectors.h
	g++ -c -std=c++11 main.cpp vectors.cpp

tests.o: tests.cpp vectors.cpp doctest.h vectors.h
	g++ -c -std=c++11 tests.cpp vectors.cpp

vectors.o: vectors.cpp vectors.h
	g++ -c -std=c++11 vectors.cpp