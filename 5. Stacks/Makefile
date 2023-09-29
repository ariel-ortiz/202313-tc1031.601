CC = g++ -g

all: main balanceo

main: main.cpp stack.h
	$(CC) main.cpp -o main

balanceo: balanceo.cpp stack.h
	$(CC) balanceo.cpp -o balanceo

clean:
	rm -rf main balanceo
