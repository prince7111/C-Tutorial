#include<stdio.h>
int main(){
    int n = 5;
    int n2 = 50;
    for(int i = n; i<= n2; i++){
        if(i %2 ==1){
            continue;
        }
        printf("%d ",i);
    }

  return 0;
}