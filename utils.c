#include "common.h"

int random(){
    srand((int)(time(0)%256 + time(0)%8 + 3 + time(0)%2 + time(0)%1024 + time(0)/7));
    return rand()%128;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}