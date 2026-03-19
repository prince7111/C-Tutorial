#include<stdio.h>
void sNum(int n);
void _sNum(int *n);
int main(){
    int n = 4;
    int un = n;
    //call bye value
    printf("call by value\n");
    sNum(n);
      (un ==n)?(printf("no change n = %d and un = %d ",n,un)): 
    printf("changed n= %d & un = %d ",n,un);

    //call by reffrence
     printf("call by refference\n");
    _sNum(&n);
    (un ==n)?(printf("no change n = %d and un = %d ",n,un)): 
    printf("changed n= %d & un = %d ",n,un);
    

    return 0;
}

void sNum(int n){
     n = n*n;
    printf("suare is:%d\n",n);
}
void _sNum(int *n){
    *n = (*n)*(*n);
    printf("suare is:%d\n",*n);

}
