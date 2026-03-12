#include<stdio.h>
int fact(int n);
int main(){
    int n = 4;
    printf("%d",fact(n));

    return 0;
}
int fact(int n){
    
    if(n==1 || n ==0){
        return 1;
    }
    int fnm = fact(n-1);
    return fnm * n;
}