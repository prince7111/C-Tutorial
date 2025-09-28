#include <stdio.h>
     int main(){
       // year one
        int sem1Back;
        int sem2Back;
        int firstYearTotalBack;
        float sem1CGPA;
        float sem2CGPA;
        float firstYearTotalCGPA;

        //backlogs part1
        printf("Enter your First sem Back:\n");
        scanf("%d",&sem1Back);
        printf("Entere your second sem Back:\n");
        scanf("%d",&sem2Back);
        firstYearTotalBack = sem1Back+sem2Back;
        //Cgpa part 2
        printf("Enter your first sem cgpa:\n");
        scanf("%f", &sem1CGPA);
         printf("Enter your second sem cgpa:\n");
        scanf("%f",&sem2CGPA);
        firstYearTotalCGPA = (sem1CGPA+sem2CGPA);
        printf("total backlog =");
        printf("%d\n",firstYearTotalBack);
        

        //
        if(firstYearTotalBack < 5 && firstYearTotalCGPA > 5.0){
            printf("eligible for 3rd SEMESTER\n");
        }else {
            printf("not eligible for 3rd SEMESTER\n");
        }

       

        return 0;
     }