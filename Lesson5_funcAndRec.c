#include <stdio.h>
void namste();
void bonjour();
      int main(){
          printf("Entere f for frence & i for india\n");
          char ch;
          scanf("%c",& ch);
          if(ch =='i'){
               namste();
          }else if(ch =='f'){
               bonjour();
          }else{
               printf("your entered those charecter we are not coverd in this programe");
          }
          return 0;
         
      }
      void namste(){
          printf("Namste \n");
      }
      void bonjour(){
          printf("Bonjour \n");
      }

//           // //prototype/Declaration
//           // void printHello();
//           // void printBye();
//       int main(){
//           // //functions calling
//           // printHello();
//           // printBye();
//       return 0;
// }
// //           //function declaring
// //    void printHello(){
// //         printf("Hello \n");
// //    }
// //    void printBye(){
// //         printf("Good Bye \n");
// //    }