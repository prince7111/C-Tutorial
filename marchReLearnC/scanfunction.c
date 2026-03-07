#include <stdio.h>
int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    if(age>=20){
        printf("your are Adult");
    }else{
        printf("Not Adult");
    }
    return 0;
}