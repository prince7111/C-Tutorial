#include<stdio.h>
float addGst(float price,float gst);
int main(){
    float price = 100.0;
   
    printf("%f",addGst(price,0.18));
   


    return 0;
}
float addGst(float price,float gst){
    return (price + (gst *price));

}