#include<stdio.h>
void printLetter(char *ptr);
int main(){
  char ch = 'A';

  char *ptr = &ch;
  for(int i = 0; i<26; i++){
    printf("%c,",(*ptr) + i);
  }
  
  
  return 0;
}



