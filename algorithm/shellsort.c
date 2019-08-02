#include "main.h"

void main(){
    int arr[] = {125, 73, 5, 26, 390, 85, 632, 56978, 53, 56, 56, 33};
    int arrSize = sizeof(arr)/sizeof(*arr);

    for(int gap = arrSize / 4; gap > 0; gap /= 2){
        printfd(gap);
        for(int i = gap; i < arrSize; i++){
            for(int j = i; j >= gap; j -= gap){
                if (arr[j] < arr[j - gap]) {
                    swap(&arr[j], &arr[j - gap]);
                }
            }
        }
    }

    for(int i = 0; i < arrSize; i++){
        printf("the val is: %d\n", arr[i]);
    }
}