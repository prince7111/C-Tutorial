#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 91;
    marks[0][2] = 92;

    marks[1][0] = 40;
    marks[1][1] = 41;
    marks[1][2] = 42;
    printf("%d %d",marks[0][0],marks[1][1]);

    return 0;
}