#include <stdio.h>

enum DAY{
    Mon = 1, TUE, WED
};

int main(){
    enum DAY day;

    printf("Please input your love day !\n");
    scanf("%d", &day);

    switch(day){
        case Mon:
            printf("Your love day is Mon!\n");
            break;
        case TUE:
            printf("Your love day is TUE!\n");
            break;
        case WED:
            printf("Your love day is WED!\n");
            break;
        default:
            printf("Your have no choice!\n");
    };

    return 0;
}