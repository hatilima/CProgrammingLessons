CC=gcc
all: main.o
	$(CC) -o program main.o

main.o: ../main.c
	$(CC) -c ../main.c

clean:
	rm -f *.o
	rm -f program
