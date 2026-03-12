#include <stdio.h>
float squareArea(float side);
float circleArea(float r);
float rectangleArea(float a,float b);

int main(){
    float side = 4;
    float r = 4;
    float a = 4;
    float b = 4;
    printf("area of square %f\n",squareArea(side));
    printf("area of circle %f\n",circleArea(r));
    printf("area of rectangleArea %f\n",rectangleArea(a,b));
    return 0;
}
float squareArea(float side){
    return side * side;
}
float circleArea(float r){
    return 3.14 * (r * r);
}
float rectangleArea(float a,float b){
    return a * b;
}