#include<stdio.h>
int main(){
    int n = 45;

    int *ptr = &n;
    printf("Value of x= %d\n",n); //45;
    printf("Address of x %d\n",&n);
    printf("Address of x %p\n", &n);// 7ff
     printf("Address of x %u\n", &n);// 7ff
    printf("value of pointer= %d",*ptr);

    return 0;
}
