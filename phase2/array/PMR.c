#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("value:%d\n",_age);//22
 
    return 0;
}