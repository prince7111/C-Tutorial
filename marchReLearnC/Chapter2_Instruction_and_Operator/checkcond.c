#include <stdio.h>
int main(){
    //@
//    int isSunday = 1;
//    int isSnowing = 0;
//    int ans = isSnowing & isSunday;
//    printf("%d",ans);
   //(b)
//    int isMonday = 1;
//    int isRaining = 0;
//    int ans = isMonday || isRaining;
//    printf("%d",ans);
//(c)
int n =10;
int ans = ((n<100) && (n>9));
if(ans == 0){
    printf("not a two digit number");
}else{
    printf(" a two  digit number"); 
}
    return 0;
}