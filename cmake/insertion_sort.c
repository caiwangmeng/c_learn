#include <stdio.h>

#define printfd(x) printf(#x" the val is: %d\n", x);

void main(){
    int arr[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(*arr);
    int temp = 0;

    int iteratorCount = 0;
    int swapCount = 0;
    for(int i = 1; i < arrSize; i++){
        for(int j = i; j > 0; j--){
            iteratorCount++;
            if (arr[j] < arr[j - 1]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
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