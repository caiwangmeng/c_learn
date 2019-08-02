#include <stdio.h>

void main(){
    int i, j ,k, count;
    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            if (j == i){
                continue;
            }
            for(int k = 1; k <5; k++){
                if (k == i || k == j){
                    continue;
                }
                printf("i: %d  j: %d  k: %d\n", i, j, k);
                count++;
            }
        }
    }
    printf("total num: %d\n", count);
}