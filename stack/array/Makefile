CC = clang
FLAGS = -Wall

all: stack_array.out

stack_array.out: main.o func.o
	$(CC) $(FLAGS) -o stack_array.out main.o func.o

main.o: main.c
	$(CC) $(FLAGS) -c main.c

func.o: func.c
	$(CC) $(FLAGS) -c func.c