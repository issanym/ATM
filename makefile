

all: atm

atm: main.o header.o
	g++ main.o header.o -o atm

main.o: main.cpp
	g++ -c main.cpp -o main.o

header.o: header.cpp
	g++ -c header.cpp -o header.o


