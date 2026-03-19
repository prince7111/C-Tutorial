#include<stdio.h>
int sumFnN(int n);
int main(){
    int n = 7;
    printf("%d",sumFnN(n));
    


    return 0;
}
int sumFnN(int n){
    if(n==1){
        return 1;
    }
int sum = sumFnN(n-1)+n;
return sum;

}