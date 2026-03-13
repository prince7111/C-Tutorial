#include<stdio.h>
int main(){
     int age = 22;
     int *ptr = &age;
     printf("print value of age:%d\n",age); // 22
      printf("print ptr stored add:%d\n",ptr);//....
     printf("print ptr stored add:%p\n",ptr); //ffffhh
     printf("print *ptr value at add: %d\n",*ptr);//22

     
    return 0;
}