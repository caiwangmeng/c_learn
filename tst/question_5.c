#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char name[100];
   char *description;
   int * ptr;

   strcpy(name, "Zara Ali");

   /* 动态分配内存 */
   description = (char *)malloc( 2 * sizeof(char) );
   if( description == NULL )
   {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else
   {
    // ??? 为什么10个字节可以存放
      strcpy( description, "asdfghjkloxlll sdfsl sdsfs");
   }
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );

   // ???
   printf("size of Description: %d\n", sizeof(description));
   printf("size of ptr: %d\n", sizeof(ptr));
   printf("size of name: %d\n", sizeof(char) );
}