#include<stdio.h>
void printAdd(p);
int main(){
    int p = 4;
    printf("%p\n",&p);
    printAdd(p);
    return 0;
}
void printAdd(int p){
    printf("%p\n",&p);
}