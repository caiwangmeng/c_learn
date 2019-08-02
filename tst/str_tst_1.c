#include <stdio.h>

 void main(void){
 //    char greet[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
     char greet[6] = "hello";
     printf("Greet msg is : %s \n", greet);

     for(int i = 0; i < sizeof(greet)/sizeof(greet[0]); i++){
         printf("address of element %d is: %d\n", i, &greet[i]);
     }

    // ???
    printf("The last element of greet arr is: %s \n", greet[1]);
 }