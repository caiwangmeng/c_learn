#ifndef common
#define common

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

#ifndef printf_many
#define printfd(x) printf(#x" val is: %d\n", x);
#define printfs(x) printf(#x" val is: %s\n", x);
#define printff(x) printf(#x" val is: %f\n", x);
#endif


int random();

void swap(int *a, int *b);

void insertion_sort();

void haha();

int gethaha();

#endif