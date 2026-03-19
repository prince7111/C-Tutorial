#include <stdio.h>
void swap(int x,int y);
void _swap(int *x,int *y);
int main(){
    int x = 11;
    int y = 44;
    //CALL BY VALUE
    printf("Call by value-\n");
    printf("x:%d,y: %d\n",x,y);
    printf("-----------------\n");
    swap(x,y);
    printf("------------------\n");
    printf("x:%d, y: %d\n",x,y);
    //CALL BY REFFERENCE
    printf("Call by rfenrece-\n");
    printf("x:%d,y: %d\n",x,y);
    printf("-----------------\n");
    _swap(&x,&y);
    printf("------------------\n");
    printf("x:%d, y: %d\n",x,y);


    return 0;
}
void swap(int x,int y){
    int t = x;
    x = y;
    y = t;
    printf("x =>%d, y => %d\n",x,y);

}
void _swap(int *x,int *y){
    int t = *x;
    *x = *y;
    *y = t;
    printf("x =>%d, y => %d\n",*x,*y);

}