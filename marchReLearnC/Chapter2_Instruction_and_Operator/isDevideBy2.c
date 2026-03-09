#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Entere your number:");
    scanf("%d",&n);
    if(n % 2 ==0){
        printf("divisible");
    }else{
        printf("Undivisible");
    }
    
    return 0;
}
