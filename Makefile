main: main.o profile.o network.o 
	g++ -o main main.o profile.o network.o

main.o: main.cpp profile.h network.h

profile.o: profile.cpp profile.h

network.o: network.cpp network.h

tests: tests.o profile.o network.o
	g++ -o tests test.o profile.o network.o

tests.o: tests.cpp doctest.h profile.h network.h

clean: 
	rm -f main tests main.o profile.o network.o
