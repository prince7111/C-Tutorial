#include<stdio.h>
void reverseArr(int arr[],int n);
int main(){
    int arr[] = {20,30,40,50,60,70};
    int n= sizeof(arr) / sizeof(arr[0]);
  reverseArr(arr,n);

    return 0;
}
void reverseArr(int arr[],int n){
    for(int i = 0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;

    }
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);{

        }
    }
}