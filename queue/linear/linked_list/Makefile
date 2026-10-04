CC = clang
FLAGS = -Wall

all: queue_singly

queue_singly: main.o func.o
	$(CC) $(FLAGS) -o queue_singly.out main.o func.o

main.o: main.c
	$(CC) $(FLAGS) -c main.c

func.o: func.c
	$(CC) $(FLAGS) -c func.c