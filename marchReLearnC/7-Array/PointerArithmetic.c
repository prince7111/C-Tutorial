#include<stdio.h>
int main(){
    printf("Pointer Arithmetic\n");
    int age = 23;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Diff:%u\n",ptr - _ptr);
    printf("Comparision:%u\n", (*ptr ==*_ptr));
    //////// int age = 20;
   // int *ptr = &age;

    // float price = 20.00;
    // float *ptr = &price;
    // printf("%u\n",ptr);
    // ptr++;
    // printf("%u\n",ptr);
    // ptr--;
    // printf("%u\n",ptr);

    //case 3

    // char star = '*';
    // char *ptr = &star;
    // printf("%u\n",ptr);
    // ptr--;
    // printf("%u\n",ptr);
    // ptr++;
    // printf("%u\n",ptr);

    


    return 0;
}