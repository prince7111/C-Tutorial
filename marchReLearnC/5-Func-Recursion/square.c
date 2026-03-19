#include<stdio.h>
#include<math.h>
int sqaure(int n);
int main(){
    int n;
    printf("Entere your number\n");
    scanf("%d",&n);
    printf("square of %d is %d",n,sqaure(n));

    return 0;
}
int sqaure(int n){
    return pow(n,2);
}