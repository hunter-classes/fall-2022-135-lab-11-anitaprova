CXXFLAGS = -std=c++11

main: main.o profile.o network.o 
	g++ $(CXXFLAGS) -o main main.o profile.o network.o

main.o: main.cpp profile.h network.h

profile.o: profile.cpp profile.h

network.o: network.cpp network.h profile.h

tests: tests.o profile.o network.o
	g++ $(CXXFLAGS) -o tests tests.o profile.o network.o

tests.o: tests.cpp doctest.h profile.h network.h

clean: 
	rm -f main tests main.o tests.o profile.o network.o
