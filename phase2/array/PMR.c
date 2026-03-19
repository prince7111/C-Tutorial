#include<stdio.h>
int main(){
   int *ptr;
   int x;
   ptr = &x;
   *ptr = 4;

   printf("\n%d",*ptr);//4
   printf("\n%d",x);//4

   *ptr += 5;
   printf("\n%d",*ptr); //9
   printf("\n%d",x);//9
   (*ptr)++;

   printf("\n%d",*ptr);//10
   printf("\n%d",x);//10





    return 0;
}