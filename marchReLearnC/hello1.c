//C Variables datatypes + input output
#include <stdio.h>
int main(){
 int age;
 char name;
 printf("Entere your age\n");
 scanf("%d",&age);

 printf("enter your name\n");
 scanf("\n%c",& name);
 
 printf("your age is %d and your name first letter is %c",age,name);

 return 0;
}