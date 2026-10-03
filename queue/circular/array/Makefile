CC = clang
FLAGS = -Wall

all: circular_array.out

circular_array.out: func.o main.o
	$(CC) $(FLAGS) -o circular_array.out func.o main.o

func.o: func.c
	$(CC) $(FLAGS) -c func.c

main.o: main.c
	$(CC) $(FLAGS) -c main.c