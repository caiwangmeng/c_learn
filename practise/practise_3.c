#include <stdio.h>

// ??? 不止一个
void main(){
    // X +100 +168
    long y, z;
    for(long x  = 0; ; x++){
        y = x + 100;
        for(long a = 10; a * a <= y; a++){
            if (a * a == y){
                z = y + 168;
                for(long b = 15; b * b <= z; b++){
                    if (b * b == z){
                        printf("x is: %lu\ny is: %lu\nz is:%lu\n", x, y, z);
                        return;
                    }
                }
            }
        }
        y = 0;
        z = 0;
    }
}