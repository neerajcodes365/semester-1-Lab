#include<stdio.h>
int main(){
FILE *ptr;
 ptr=fopen("iloveU.txt","r");
 printf("%c",fgetc(ptr));
 printf("%c",fgetc(ptr));
 printf("%c",fgetc(ptr));
 printf("%c",fgetc(ptr));
 printf("%c",fgetc(ptr));
 printf("%c",fgetc(ptr));

return 0;
}