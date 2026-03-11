#include<stdio.h>
int main(){
    int n;
    printf("enter your number n:");
    scanf("%d",&n);
    while((1)){
        if(n%2 ==1){
            break;
        }
        printf("output %d",n);
         printf("enter your number n:");
    scanf("%d",&n);
        
    }
    printf("thank you");
    return 0;
}