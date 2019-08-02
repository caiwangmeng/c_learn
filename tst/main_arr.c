#include <stdio.h>

int main (){
    int n[10];
    int i,j;
    for(i = 0; i < 10; i++){
        n[i] = i + 100;
        printf("i is : %d \n", i);
    }

    for(j = 0; j < sizeof(n)/sizeof(n[1]); j++){
        printf("The %d element in n is: %d \n", j, n[j]);
    }

    printf("size of n: %d \n", sizeof(n));
    printf("size of n[i]: %d \n", sizeof(1));

    return 0;

}