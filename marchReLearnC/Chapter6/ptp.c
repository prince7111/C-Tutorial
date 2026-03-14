#include<stdio.h>
int main(){
    float p = 100.0;
    float *ptr = &p;
    float **ptp = &ptr;
    printf("p=%f\n",p);
    printf("*ptr =%f\n",*ptr);
    printf("*ptp =%f\n",*ptp);


    return 0;
}