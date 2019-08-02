#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int arr[10] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(*arr);

    for(int i = 1; i < arrSize; i++){
        for(int j = i; j > 0; j--){
            if (arr[j] < arr[j - 1]) {
                swap(&arr[j], &arr[j -1]);
            }
        }
    }

    for(int i = 0; i < arrSize; i++){
        printf("the val is: %d\n", arr[i]);
    }
}