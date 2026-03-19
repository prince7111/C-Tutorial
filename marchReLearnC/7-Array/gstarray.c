#include <stdio.h>
//write a program to enter price of 3 prints their final code with gst

int main(){
    float price[3];
    printf("enter price\n");
    scanf("%f",&price[0]);

    printf("enter price\n");
    scanf("%f",&price[1]);

    printf("enter price\n");
    scanf("%f",&price[2]);

    printf("total price 1: %f",price[0] + (0.18  *(price[0])));
    printf("total price 1: %f",price[1] + (0.18  *(price[1])));
    printf("total price 1: %f",price[2] + (0.18  *(price[2])));




    


    return 0;
}