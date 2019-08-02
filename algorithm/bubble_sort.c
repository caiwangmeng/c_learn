#include <stdio.h>

#define printfd(x) printf(#x" is: %d\n", x)

void swap(int *a, int *b);

void main(){
//    int arr[] = {5,26,56,39,85,632,56978,53,1,56};
    int arr[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int iteratorCount;
    int swapCount;

    for(int i = 0; i < (arrSize - 1); i++){
        for(int j = 0; j < (arrSize - 1 - i); j++){
            iteratorCount++;
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                swapCount++;
            }
        }
    }
    for(int i = 0; i < arrSize; i++){
        printfd(arr[i]);
    }

    printfd(iteratorCount);
    printfd(swapCount);

//    int a = 5;
//    int b = 10;
//    swap(&a, &b);
//    printfd(a);
//    printfd(b);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
