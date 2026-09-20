CC = clang
FLAGS = -Wall -O2

all: linked_list.out

linked_list.out: func.o main.o
	$(CC) $(FLAGS) -o linked_list.out func.o main.o


func.o: func.c
	$(CC) $(FLAGS) -c func.c

main.o: main.c
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.out


