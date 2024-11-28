#include<stdio.h>
int main(){
   float markA,markB,markC,total_marks;
   printf("enter the mark of course A");
   scanf("%f",&markA);
     printf("enter the mark of course B");
   scanf("%f",&markB);
     printf("enter the mark of course C");
   scanf("%f",&markC);
   total_marks=(markA/2)+(markB/4)+(markC/4);
   printf("total marks = %f",total_marks);

return 0;
}