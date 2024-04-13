CC = gcc
CFLAGS = -c -Wall

all: lab10

lab10: main.o fight.o
	$(CC) main.o fight.o -o lab10 -lm

main.o: main.c
	$(CC) $(CFLAGS) main.c

fight.o: fight.c
	$(CC) $(CFLAGS) fight.c

clean:
	rm -rf *o lab10

