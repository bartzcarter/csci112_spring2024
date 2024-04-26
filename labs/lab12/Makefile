CC = gcc
CFLAGS = -c -Wall

all: lab12

lab12: main.o team.o
	$(CC) main.o team.o -o lab12

main.o: main.c
	$(CC) $(CFLAGS) main.c

team.o: team.c
	$(CC) $(CFLAGS) team.c

clean:
	rm -rf *o lab12



