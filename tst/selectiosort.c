#include <stdio.h>

void main(){
    int array[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(array)/sizeof(*array);
    int minIndex;
    int temp = 0;

    // 遍历一遍选择最小的
    for(int i = 0; i < arrSize; i++){
        minIndex = i;
        for(int j = i; j < arrSize; j++){
            if (array[minIndex] > array[j]) {
                minIndex = j;
            }
        }
        if (minIndex != i){
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }

    for(int i = 0; i < arrSize; i++){
        printf("the val is: %d\n", array[i]);
    }

}