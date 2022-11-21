main: main.o profile.o 
	g++ -o main main.o profile.o

main.o: main.cpp profile.h

tests: tests.o profile.o
	g++ -o tests test.o profile.o

tests.o: tests.cpp doctest.h profile.h

clean: 
	rm -f main tests main.o profile.o
