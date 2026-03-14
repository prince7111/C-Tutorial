#include<stdio.h>
int main(){
//     char ch = 'A';
//     char *ptr = &ch;
//  for(int i =0; i<26 ; i++){
//     printf("%c ",(*ptr + i));
//  }

//(B);

int arr[] = {10,12,20,23};
for(int i =3; i>=0; i--){
    printf("%d ",arr[i]);
}
 
    return 0;
}

    //QUESTION 1:
    // int a = 3;
    // int b = 4;
    // int *ptr1 = &a;
    // int *ptr2 = &b;
    
    // if(*ptr1 > *ptr2 ){

    //     printf("max n is :%d",*ptr1);

    // }else{

    //     printf("max n is :%d",*ptr2);
        
    // }