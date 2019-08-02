#include <stdio.h>

int max(int, int);

int main(void){
    int (* p)(int, int) = &max;
    int a, b, c, d;

    printf("Please input three num:!\n");
    scanf("%d %d %d", &a, &b, &c);

    d = p(a, p(b, c));
    printf("The max val is: %d \n", d);

    printf("The *p is: %d \n", *p); // the value of max -> 同4
    printf("The val of p is: %d \n", p); // &max -> address of max
    printf("The max function address is: %d \n", &max); // 同上
    printf("The val of max is: %d \n", max); // the val of function is -> address of max
    printf("The address of p is: %d \n", &p); // address of p

    return 0;
}

int max(int a, int b){
    return a > b ? a : b;
}