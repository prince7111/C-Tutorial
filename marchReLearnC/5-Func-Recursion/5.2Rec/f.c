#include <stdio.h>
int fib(int n);
int main(){
    int n = 7;
    printf("fibnch -=- :%d",fib(n));
    return 0;
}
int fib(int n){
    if(n ==0){
        return 0;
    }if(n==1){
        return 1;
    }
    int fnm1 = fib(n-1);
    int fnm2 = fib(n-2);
    int f = fnm1 + fnm2;
    return f;
}