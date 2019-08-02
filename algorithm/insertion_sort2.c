#include <stdio.h>

#define printfd(x) printf(#x" the val is: %d\n", x);

void insertion_sort(int arr[], int len){
    int i,j,temp;
    for (i=1;i<len;i++){
            temp = arr[i];
            for (j=i;j>0 && arr[j-1]>temp;j--)
                    arr[j] = arr[j-1];
            arr[j] = temp;
    }
}

void main(){
    int arr[] = {1, 5, 26, 39, 85, 632, 56978, 53, 56, 56};
    int arrSize = sizeof(arr)/sizeof(*arr);
    int temp = 0;

    insertion_sort(arr, arrSize);

    for(int i = 0; i < arrSize; i++){
        printfd(arr[i]);
    }

}