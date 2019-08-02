#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void swap(int* x, int* y){
  //交换
  int temporary = *x;
  *x = *y;
  *y = temporary;
}

void randomize(int arr[], int length){
  //打乱数组
  for(int i = 0; i < length; i++){
    srand(time(NULL)+i);//引入i增加随机性
    if(rand()%2) swap(&arr[i],&arr[i+1]);
  }
  //printf("!");//记录打乱次数
}

bool isSorted(int arr[], int length){
  for(int i = 0; i < length; i++) if(arr[i]>=arr[i+1]) return false;
  return true;
}

void bogoSort(int array[], int length){
  while(!isSorted(array,length)) randomize(array,length);
}

int main(){
  int numbers[] = {20,9,233,0};
  bogoSort(numbers,14);//也可以改成更小
  for(int i = 0; i < 14; i++) printf("%d,",numbers[i]);
}