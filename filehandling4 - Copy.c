#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("fuckoff.txt","w");
fputc('F',ptr);
fputc('C',ptr);
putc('u',ptr);
putc('k',ptr);


return 0;
}