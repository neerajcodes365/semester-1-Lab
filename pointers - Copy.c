#include<stdio.h>
int main(){
    int a=10;
   int *ptr=&a;
 int b=10;
 int *ptrr=&b;
 int d= *ptr+*ptrr; 1

printf("%u\n",ptr);
printf("%u\n",ptrr);

printf("%u\n",ptr+ptrr);
printf("%d\n",d);



// printf("%u\n",ptr);
// printf("%d",&a);


return 0;
}