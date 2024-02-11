all: main

run: main
	./main

main: main.o Transporters.o Cargo.o Bus.o Train.o
	g++ -g -o main main.o Transporters.o Cargo.o Bus.o Train.o

main.o: main.cpp
	g++ -g -c main.cpp

Transporters.o: Transporters.cpp
	g++ -g -c Transporters.cpp -o Transporters.o

Cargo.o: Cargo.cpp
	g++ -g -c Cargo.cpp -o Cargo.o

Bus.o: Bus.cpp
	g++ -g -c Bus.cpp -o Bus.o

Train.o: Train.cpp
	g++ -g -c Train.cpp -o Train.o

clean:
	del main main.o Cargo.o Bus.o Train.o Transporters.o *~