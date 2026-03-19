#include<stdio.h>
int main(){
    int n;
    int i =1;
    int isprime =1;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n<=1){
        isprime = 0;
    }else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                isprime = 0;
                break;
            }
        }
    }
    if(isprime){
        printf("%d isprime number",n);
    }else{
        printf("%d isNotPrime number",n);
    }
    
    return 0;
}