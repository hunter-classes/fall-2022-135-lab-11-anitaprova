main: main.o 
	g++ -o main.o 

clean: 
	rm -rf main tests main.o
