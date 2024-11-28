#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int *ptr=&arr[0];
ptr++;
printf("%p\n",&ptr);
// printf("%p\n",&ptr);
printf("%d\n",&ptr);
printf("%p\n",*ptr);
ptr++;
printf("%p\n",*ptr);
ptr++;
printf("%p\n",*ptr);


return 0;
}