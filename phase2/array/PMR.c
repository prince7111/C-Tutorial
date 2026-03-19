#include<stdio.h>
void pR(float array[],int n);
int main(){
  float array[] = {1.2,2.3,3.4,4.5,5.5};
  int n = 5;
  pR(array,n);
  for(int i = 0; i<n;i++){
    printf("%f,",array[i]);
  }
  return 0;
}
void pR(float array[],int n){
  for(int i = 0; i<= 2;i++){
    float temp = array[i];
    array[i] = array[n-i-1];
    array[n-i-1] = temp;
  }
  

}

