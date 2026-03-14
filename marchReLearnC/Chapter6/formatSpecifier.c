#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;

    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("format speciifier\n");
    return 0;
}