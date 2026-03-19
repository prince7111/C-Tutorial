#include<stdio.h>
int main(){
    printf("Pointer Arithmetic\n");
    int age = 20;
   // int *ptr = &age;

    float price = 20.00;
    float *ptr = &price;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);
    


    return 0;
}