#include<stdio.h>
int main(){
    int arr[] = {2,4,6,8,10};
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr + 5));
    return 0;
}