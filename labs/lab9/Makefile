CC = gcc
CFLAGS = -c -Wall

all: lab9

lab9: lab9.o county.o sort.o utils.o
	$(CC) lab9.o county.o sort.o utils.o -o lab9

lab9.o: lab9.c
	$(CC) $(CFLAGS) lab9.c

county.o: county.c
	$(CC) $(CFLAGS) county.c

sort.o: sort.c
	$(CC) $(CFLAGS) sort.c

utils.o: utils.c
	$(CC) $(CFLAGS) utils.c

clean:
	rm -rf *o lab9



