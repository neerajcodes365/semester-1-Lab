#include<stdio.h>
int main(){
    
    float sum,sum1;
    int a=0,n;

    printf("enter a number of students");
    scanf("%d",&n);

 while (a<n)
{
    printf("enter the nmark");
    scanf("%f",&sum);
    sum1=(sum*1)+sum1 ;
     a++;
 }

 printf("the sum of marks = %f",sum1);
return 0;
}