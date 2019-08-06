#vpath %.c util
VPATH = ./util
CC = gcc
objects = main.o utils.o insertion_sort.o num_util.o

run: $(objects)
	$(CC) -o run $(objects)
main.o: main.c common.h
	$(CC) -c main.c
insertion_sort.o: insertion_sort.c common.h
	$(CC) -c insertion_sort.c
utils.o: utils.c common.h
	$(CC) -c utils.c
num_util.o: num_util.c
	$(CC) -c $< -o $@

clean:
	del run.exe $(objects)