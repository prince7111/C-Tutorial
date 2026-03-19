#include<stdio.h>
 
int main(){
    int arr[] = {1,2,3,4,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
   
    int cunt =0;
    for(int i = 0; i< n; i++){
        if((arr[i]%2) != 0){
            cunt = cunt +1;

        }
        
    }
    printf("count of odd in this array:%d",cunt);

    return 0;
}