CC = clang
FLAGS = -Wall

all: c_queue_singly

c_queue_singly: func.o main.o
	$(CC) $(FLAGS) -o c_queue_singly.out func.o main.o

func.o: func.c
	$(CC) $(FLAGS) -c func.c

main.o: main.c
	$(CC) $(FLAGS) -c main.c