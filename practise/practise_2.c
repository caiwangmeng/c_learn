#include <stdio.h>
#include <stdlib.h>

#define printlf(regard) printf("the regard is: %lf", regard);

const double ZERO = 0;
const double ONE_HUNDRED_THOUSAND = 100000;
const double TWO_HUNDRED_THOUSAND = 200000;
const double FOUR_HUNDRED_THOUSAND = 400000;
const double SIX_HUNDRED_THOUSAND = 600000;
const double ONE_MILLION = 1000000;

void main(int argc, char *argv[]){
    // 需要确认数值类型
    if (argc < 2 || atof(argv[1]) < 0){
        return;
    }
    double a = (ONE_HUNDRED_THOUSAND - ZERO) * 0.1;
    double b = a + (TWO_HUNDRED_THOUSAND - ONE_HUNDRED_THOUSAND) * 0.075;
    double c = b + (FOUR_HUNDRED_THOUSAND - TWO_HUNDRED_THOUSAND) * 0.050;
    double d = c + (SIX_HUNDRED_THOUSAND - FOUR_HUNDRED_THOUSAND) * 0.030;
    double e = d + (ONE_MILLION - SIX_HUNDRED_THOUSAND) * 0.015;

    double i = atof(argv[1]);
    if(i < ONE_HUNDRED_THOUSAND){
        printlf(i * 0.1);
    } else if(i < TWO_HUNDRED_THOUSAND){
        printlf((i - ONE_HUNDRED_THOUSAND) * 0.075 + a);
    } else if(i < FOUR_HUNDRED_THOUSAND){
        printlf((i - TWO_HUNDRED_THOUSAND) * 0.050 + b);
    } else if(i < SIX_HUNDRED_THOUSAND){
        printlf((i - FOUR_HUNDRED_THOUSAND) * 0.030 + c);
    } else if(i < ONE_MILLION){
        printlf((i - SIX_HUNDRED_THOUSAND) * 0.015 + d);
    } else {
        printlf((i - ONE_MILLION) * 0.010 + e);
    }
}