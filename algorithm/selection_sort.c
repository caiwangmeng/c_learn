#include <stdio.h>

#define printfd(x) printf(#x" is: %d\n", x)

void main(){
    int arr[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(*arr);
    int min = 0, index = 0;
    int iteratorCount = 0, swapCount = 0;

    for(int i = 0; i < arrSize; i++){
        min = arr[i];
        index = i;
        for(int j = i; j < arrSize; j++){
            iteratorCount++;
            if (min > arr[j]){
                min = arr[j];
                index = j;
                swapCount++;
            }
        }
        if (i != index){
            arr[index] = arr[i];
            arr[i] = min;
        }
    }

    for(int i = 0; i < arrSize; i++){
        printfd(arr[i]);
    }

    printfd(iteratorCount);
    printfd(swapCount);
}