#include<stdio.h>
void pHello();
void pGoodBye();
int main(){
    pHello();
    pGoodBye();
    return 0;
}
void pHello(){
    printf("Hello\n");
}

void pGoodBye(){
    printf("Good Bye\n");
}