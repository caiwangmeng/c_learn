#include <stdio.h>

#define printfd(x) printf(#x" is: %d\n", x)

void main(){
//    int arr[] = {5, 26, 56, 39, 85, 632, 56978, 53, 1, 56};
    int arr[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(*arr);
    int temp;
    int iteratorCount;
    int swapCount;
    int initCount = 1;

    for(int i = 0; i < arrSize; i++){
        if (initCount == 0){
            break;
        }
        initCount = 0;
        for(int j = 0; j < arrSize - 1 - i; j++){
            iteratorCount++;
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapCount++;
                initCount++;
            }
        }
    }

    for(int i = 0; i < arrSize; i++){
        printfd(arr[i]);
    }

    printfd(iteratorCount);
    printfd(swapCount);

}