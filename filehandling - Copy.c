#include<stdio.h>
int main(){
char stp[100];
char stp2[100];

FILE *ptr;
ptr=fopen("lov.txt","r");
fscanf(ptr,"%s",stp);
fscanf(ptr,"%s",stp2);

printf("%s",stp);
printf("%s",stp2);

fclose(ptr);
return 0;
}
