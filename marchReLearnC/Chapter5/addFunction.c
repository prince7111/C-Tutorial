#include <stdio.h>
int add(int a,int b);
int main(){
    int a,b;   
    printf("sum of two number is %d",add(33,37));

    
    return 0;
}
int add (int a,int b){
    return a + b;
}