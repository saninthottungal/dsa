CC = clang
FLAGS = -Wall


all: array_queue.out

array_queue.out: func.o main.o
	$(CC) $(FLAGS) -o array_queue.out func.o main.o

func.o: func.c
	$(CC) $(FLAGS) -c func.c


main.o: main.c
	$(CC) $(FLAGS) -c main.c

