#include<stdio.h>
void insert(int arr[],int n,int val);
int main(){
    int arr[] = {1,2,3,4,5,6,7};
        int n = sizeof(arr)/ sizeof(arr[0]);
    int val = 4;
      for(int i =0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\nval :%d\n",val);
   
    insert(arr,n,val);

    return 0;
}
void insert(int arr[],int n,int val){
    int temp = arr[n-1];
    arr[n-1] = val;
    for(int i =0; i<n; i++){
        printf("%d ",arr[i]);
    }

}