#include<stdio.h>
float celToFarenhite(float celcius);
int main(){
    float celcius = 1;
  
    printf("AnsWer:%f",celToFarenhite(celcius));
   

    return 0;
}
float celToFarenhite(float celcius){
    float value = (celcius * 9/5)+ 32;
    return value;

}