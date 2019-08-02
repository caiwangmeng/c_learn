#include <stdio.h>

int main(){
    int var1 = 20;
    int *ip;

    ip = &var1;
    var1++;

    int c = memcpy(var1);

    printf("The value of ip: %d \n", ip);  // &var1
    printf("The address of ip: %d \n", &ip);  // ip address
    printf("The pointer value of ip: %d \n", *ip); // 21
    printf("The address of var1: %d \n", &var1); // &var1 = ip
    printf("The value of var1: %d \n", var1); // 21

    return 0;
}