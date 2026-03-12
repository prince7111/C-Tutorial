#include <stdio.h>
//f.p. (function prototype)
void greeting(char country);
int main(){
    printf("Entery your country:\n");
    char country;
    scanf("%c",country);
    //function calling
    greeting(country);


    return 0;
}
//function code
void greeting(char country){
    if(country =='i' || country == 'I'){
        printf("Namste");
    }else if(country == 'f' || country =='F'){
        printf("Bounjur");
    }else{
        printf("hi");
    }

}
