#include<stdio.h>
int main(){
  int a = 2323;
  int b = 4738;
  int *ptr = &a;
  int *ptr2 = &b ;
  if(*ptr > *ptr2){
    printf("%d is maiximum",a);
  }else{
    printf("%d is maiximum",b);

  }
  return 0;
}

