#include<stdio.h>
    int main(){
        int arr[5];
        int *ptr = &arr[0];

        for(int i = 0;i<5;i++){
            printf("%d index:",i);
           scanf("%d",&arr[i]);
           
        }
        for(int i=0;i<5; i++){
            printf("output:%d,",arr[i]);
        }
          return 0;

    }

  
