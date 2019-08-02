#include "main.h"

void main(){
    int arr[100];
    int arrSize = sizeof(arr)/sizeof(*arr);     // 已经申请好了内存
    for(int i = 0; i < arrSize; i++){
        arr[i] = getRandom(i + 5);
    }

//    int *p_arr = getArr();
//    printf("the val is: %d\n", *(p_arr+1));

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