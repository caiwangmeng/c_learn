#include <stdio.h>

int count1;

int max(int a, int b){
    extern int count;
    printf("The global count is: %d \n", count);
    return a > b ? a : b;
}