/*
union
使用之后即销毁，不需要频繁回收
语法更类似面向对象
*/

#include <stdio.h>
#include <string.h>

union Data {
    int a;
    float b;
    char c[4];
};

void main(){
    union Data data;
    printf("the size of data is: %d \n", sizeof(data));

    data.a = 5;
    printf("a: %d\n", data.a);

    data.b = 12.36589661;
    printf("b: %f\n", data.b);

    strcpy(data.c, "qwe");
    printf("c: %s\n", data.c);

    printf("data: \na:%d\nb:%f\nc:%s\n", data.a, data.b, data.c);

}