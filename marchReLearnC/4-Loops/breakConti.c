#include<stdio.h>
int main(){
    int n = 25;
    for(int i=1;i<=20; i++){
        if(i==19 || i == 8){
            continue;
        }
        if(i==21 )break;
        printf("%d\n",i);
    }

    return 0;
}