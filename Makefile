main: main.o Mastermind.o
	g++ -g -o main.o Mastermind.o
main.o: main.cpp Mastermind.o
	g++ -c main.cpp -o main.o
Mastermind.o: Mastermind.cpp Mastermind.h Code.o Response.o
	g++ -c Mastermind.cpp -o Mastermind.o



