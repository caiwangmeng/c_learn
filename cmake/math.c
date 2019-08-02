#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random()
{
    srand((int)(time(0)%256 + time(0)%8 + 3 + time(0)%2 + time(0)%1024 + time(0)/7));
    return rand()%128;
}