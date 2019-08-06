#include "common.h"

void insertion_sort(){
    int arr[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(*arr);

	int i = 1;
	int j = 0;
    for(i = 1; i < arrSize; i++){
        for(j = i; j > 0; j--){
            if (arr[j] < arr[j - 1]) {
                swap(&arr[j], &arr[j - 1]);
            } else {
                break;
            }
        }
    }

    for(i = 0; i < arrSize; i++){
        printfd(arr[i]);
    }

}