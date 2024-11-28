#include<stdio.h>
int main(){
   int hr,min,total_min;
   printf("enter the hours");
   scanf("%d",&hr);
   printf("enter the mintues ");
   scanf("%d",&min);
   total_min=(hr*60)+min;
   printf("total time in mintues = %d",total_min);

return 0;
}