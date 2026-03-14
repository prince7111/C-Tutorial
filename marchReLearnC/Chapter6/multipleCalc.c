#include<stdio.h>
void allInOne(int *a,int *b, int *s,int *p, int *avg);
int main(){
    int a = 9;
    int b = 4;
    int s,p,avg;
    allInOne(&a,&b,&s,&p,&avg);
    printf("sum(13) = %d, product(36)=%d , avrage(6)=%d",s,p,avg);

}
void allInOne(int *a,int *b, int *s,int *p, int *avg){
    *s = *a + *b; //13

    *p = (*a) * (*b);//36

    *avg = ((*a) + (*b)) / 2;



}