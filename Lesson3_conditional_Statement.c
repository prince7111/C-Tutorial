# include <stdio.h>
int main(){
    //Conditional Statement
    int day;
    printf("Enter yuur day number here :");
    scanf("%d",&day);
  switch(day){
    case 1:printf("Monday");
    break;
    case 2:printf("tuesday");
    break;
    case 3: printf("WednessDay");
    break;
    case 4 :  printf("Thursday");
    break;
    case 5: printf("Friday");
    break;
    case 6: printf("Saterday");
    break;
    default:printf("Sunday");
  }
}