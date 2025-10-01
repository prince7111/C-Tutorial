#include <stdio.h>
    int main(){
      //isarmstrong
      int number = 153;
      int nsize =3;
      int n = number;
      int armstrong =0;
      while(n>0){
        int lastdig = n % 10;
        int eachpow =1;
        for(int i=0;i<nsize;i++){
          eachpow*=lastdig;
        }
        armstrong += eachpow;
        n =n/10;
        
      }
      if(number == armstrong){
        printf("true");
        
      }else{
        printf("false");
      }
      
      
      
     return 0;
   }


