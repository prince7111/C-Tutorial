#include<stdio.h>
void printMaximum(int *a,int *b);
int main(){
    printf("Program start\n");
    //QUESTION 1:
    int a = 3;
    int b = 4;
    int *ptr1 = &a;
    int *ptr2 = &b;
    
    if(*ptr1 > *ptr2 ){

        printf("max n is :%d",*ptr1);

    }else{

        printf("max n is :%d",*ptr2);
        
    }
    return 0;
}






