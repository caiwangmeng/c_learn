#include <stdio.h>

const double ZERO = 0;
const double ONE_HUNDRED_THOUSAND = 100000;
const double TWO_HUNDRED_THOUSAND = 200000;
const double FOUR_HUNDRED_THOUSAND = 400000;
const double SIX_HUNDRED_THOUSAND = 600000;
const double ONE_MILLION = 1000000;

void main(int argc, char * argv[]){
    // 需要确认数值类型
    if (argc < 2 || argv[1] < 0){
        return;
    }
    double total;
    double a = (ONE_HUNDRED_THOUSAND - ZERO) * 0.1;
    double b = a + (TWO_HUNDRED_THOUSAND - ONE_HUNDRED_THOUSAND) * 0.075;
    double c = b + (FOUR_HUNDRED_THOUSAND - TWO_HUNDRED_THOUSAND) * 0.050;
    double d = c + (SIX_HUNDRED_THOUSAND - FOUR_HUNDRED_THOUSAND) * 0.030;
    double e = d + (ONE_MILLION - SIX_HUNDRED_THOUSAND) * 0.015;

    double i = argv[1];
    if(i < ONE_HUNDRED_THOUSAND){
        printf("the regard is: %d", i * 0.1);
    }


}