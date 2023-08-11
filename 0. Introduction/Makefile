# Make file for introductory project.

CC = g++ -g

main_fact: main.o fact.o
	$(CC) main.o fact.o -o main_fact

main.o: main.cpp fact.h
	$(CC) -c main.cpp

fact.o: fact.cpp fact.h
	$(CC) -c fact.cpp

clean:
	rm -f main.o fact.o main_fact
