#include<stdio.h>
#include<string.h>


int main(){
    char c[7]="sbcd";
    // scanf("%s",c);

char *b=c;
printf("%s\n",c);
printf("%d\n",&c);
printf("%d\n",b);
printf("%c\n",*b);
b++;
printf("%c\n",*b);
printf("%d",strlen(b));



return 0;
}