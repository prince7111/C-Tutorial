#include<stdio.h>
int main(){
   int age = 22;
   int *ptr = &age;
   printf("&age =%d\n",&age);
   printf("&*ptr= %d\n",&*ptr);
   printf("&ptr =%d\n",&ptr);
   printf("age %d ",age);
   printf("*ptr %d",*ptr);
    return 0;
}
