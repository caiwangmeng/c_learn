#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

const int MOD = 1024;
#define printfd(x) printf(#x" val is: %d\n", x);
#define printfs(x) printf(#x" val is: %s\n", x);
#define printff(x) printf(#x" val is: %f\n", x);

// variable
int iteratorCount = 0;
int swapCount = 0;

// function
int getRandom(int i){
    srand((int)(time(0)/256 + time(0)%8 + 3 + time(0)%2 + time(0)%1024 + time(0)/7 + i*i*i + i*3));
    return rand() % MOD;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}