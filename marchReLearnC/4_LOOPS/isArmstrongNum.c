#include<stdio.h>
#include<math.h>
int main(){
    int num;
    int oNum = 0;
    int rem = 0;
    int digit = 0;
    int result = 0;
    printf("Enter number:\n");
    scanf("%d",&num);
    oNum =  num;
    while(oNum != 0){
        rem = oNum/10;
        digit++;
         }
    oNum = num;
    while(oNum != 0){
        rem = oNum % 10;
        result += (int )round (pow(rem,digit));
        oNum /= 10;
    }
    if(result == num){
        printf("%d is armstrong number",num);
    }else{
        printf("%d is not armstrong number",num);
    }
    
    

    
    return 0;
}