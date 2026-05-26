#include<stdio.h>
int main(){
 //Calculate area of circle
 // area of circle = pie r^2

 float pie = 3.14;
 int r;
 printf("Enter r:");
 scanf("%d",&r);
 float formula = pie * (r * r);
 //OUTPUT
 printf("%f",formula);

}