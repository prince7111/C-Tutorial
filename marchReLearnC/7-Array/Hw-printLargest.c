#include<stdio.h>
int printLargest(int arr[],int n);
int main(){
    int arr[] = {1,2,4,5,6,7};
    int n = sizeof(arr) /sizeof(arr[0]);
    printf("largest is:%d",printLargest(arr,n));

    return 0;
}
int printLargest(int arr[],int n){
    int max =0;
    for(int i=0;i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }


    }
    return max;
}