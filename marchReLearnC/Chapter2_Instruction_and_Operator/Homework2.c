#include<stdio.h>
int main(){
    // int n = 22;
    // int nu = 34;
    // int num = 343;
    // int avg  = (n + nu  + num)/3;
    // printf("%d",avg);

  
    char character ;
    scanf("%c",&character);
    if((character >=48) && (character <=57)){
    printf("its digit");
    }else{
        printf("its not  digit");

    }
    return 0;
}