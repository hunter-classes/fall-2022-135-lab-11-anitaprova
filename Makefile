CXXFLAGS = -g -std=c++11 -Wall -pedantic

main: main.o profile.o network.o 
	g++ $(CXXFLAGS) -o main main.o profile.o network.o

main.o: main.cpp

profile.o: profile.cpp profile.h

network.o: network.cpp network.h profile.h

tests: tests.o profile.o network.o
	g++ $(CXXFLAGS) -o tests tests.o profile.o network.o

tests.o: tests.cpp doctest.h

clean: 
	rm -f main tests main.o tests.o profile.o network.o
