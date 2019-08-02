#include <stdio.h>

void main(){
    int arr[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(*arr);
    int temp = 0;
    int swapCount = 0;

    for(int i = 0; i < arrSize; i++){
        swapCount = 0;
        for(int j = 0; j < arrSize - 1 - i; j++){
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapCount++;
            }
        }
        if (swapCount == 0)
            break;
    }

    for(int i = 0; i < arrSize; i++){
        printf("the val is: %d\n", arr[i]);
    }

}