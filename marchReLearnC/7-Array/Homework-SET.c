#include<stdio.h>
int f(int arr[],int size,int z);
int main(){
    //frequency of numbwr x
    int x;
    printf("Enter x:\n");
    scanf("%d",&x);
    int size;
    printf("Enter Size Of Array:\n");
    scanf("%d",&size);
    int arr[size] ;
    for(int i = 0; i<size ; i++){
        printf("%d index:",i);
        scanf("%d",&*(arr+i));

    }
    int ans = f(arr,size,x);
    printf("--------------------\n");
    printf("Occurance of %d is =%d\n",x,ans);
       printf("-----------------\n");


    return 0;
}
int f(int arr[],int size,int x){
    int c = 0;
    for(int i=0;i<size;i++){
        if(arr[i] ==x){
            c = c+1;
        }
    }
    return c;
}