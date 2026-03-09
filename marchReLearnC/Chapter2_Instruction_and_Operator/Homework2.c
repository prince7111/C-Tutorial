#include<stdio.h>
int main(){
    // int n = 22;
    // int nu = 34;
    // int num = 343;
    // int avg  = (n + nu  + num)/3;
    // printf("%d",avg);

  
    // char character ;
    // scanf("%c",&character);
    // if((character >=48) && (character <=57)){
    // printf("its digit");
    // }else{
    //     printf("its not  digit");

    // }
    int a,b,c;
    printf("enter your number a");
    scanf("%d",&a);
    printf("enter your number b");
    scanf("%d",&b);
    printf("enter your number c");
    scanf("%d",&c);
    if(a>b && a >c){
        printf("a is grater");
    }else if(b>a && b>c){
        printf("b is greater");
    }else{
        printf("c is greater");
    }
    return 0;
}