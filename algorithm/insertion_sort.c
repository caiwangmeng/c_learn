#include "main.h"

void main(){
    int arr[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(*arr);

    for(int i = 1; i < arrSize; i++){
        for(int j = i; j > 0; j--){
            iteratorCount++;
            if (arr[j] < arr[j - 1]) {
                swap(&arr[j], &arr[j - 1]);
                swapCount++;
            } else {
                break;
            }
        }
    }

    for(int i = 0; i < arrSize; i++){
        printfd(arr[i]);
    }
    printfd(iteratorCount);
    printfd(swapCount);

}