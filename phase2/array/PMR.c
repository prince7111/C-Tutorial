#include<stdio.h>
int main(){
    int age = 20;
    int *ptr = &age;
    printf("%d",age);
    printf("\n");
    printf("%d",*ptr);
    printf("\n");
    printf("%d",*(&age));
    printf("\n");

    return 0;
}