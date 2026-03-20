//#Two-d-table.c
#include <stdio.h>
int main(){
    //2 4 6 8 10 12 14 16 18 20
    //3 6 9 12 15 18 21 24 27 30
    int n1 = 2;
    int n2 = 3;
    int table[2][10];
    
    for(int i =1;i<=10;i++){
        table[0][i] = n1 *i;
        table[1][i] = n2 *i;
    }
     for(int i =1;i<=10;i++){
        printf("%d ",table[0][i]);
          
    }
    printf("\n");
         for(int i =1;i<=10;i++){
        printf("%d ",table[1][i]);
          
    }
    
    return 0;
}