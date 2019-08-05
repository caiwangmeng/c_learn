objects = main.o utils.o insertion_sort.o num_util.o

run: $(objects)
	gcc -o run $(objects)
main.o: main.c common.h
	gcc -c main.c
insertion_sort.o: insertion_sort.c common.h
	gcc -c insertion_sort.c
num_util.o: ./util/num_util.c common.h
	gcc -c ./util/num_util.c
utils.o: utils.c common.h
	gcc -c utils.c

clean:
	del run.exe $(objects)