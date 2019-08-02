#include <stdlib.h>
#include <stdio.h>

int a = 0;
int i;

int getGoods(){
    printf("customer get goods...");
}

void noticeGetGoods(int (*func1)(void)){
    printf("notice...");
    func1();
}

int main(void){
    for( ; ; a++){
        if (a > 10){
            noticeGetGoods(getGoods);
            // 有货 -> 通知取货
            break;
        }
        printf("have no goods...");
    }

    return 0;
}