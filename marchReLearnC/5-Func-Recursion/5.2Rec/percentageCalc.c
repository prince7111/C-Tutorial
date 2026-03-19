#include <stdio.h>
float avrage( float maths,float science,float sinskrit);
int main(){
    float maths = 30;
    float science = 40 ;
    float sinskrit= 50;
    printf("Average %f",avrage(maths,science,sinskrit));
    
    return 0;
}
float avrage( float maths,float science,float sinskrit){
    return (maths + science + sinskrit) /3;
}