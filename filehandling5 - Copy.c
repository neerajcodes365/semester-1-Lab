#include<stdio.h>
int main(){
FILE *ptr;
FILE *ptr2;
char c;
char c2;


ptr2=fopen("lov2222.txt","w");

ptr=fopen("lov.txt","r");

while((c=fgetc(ptr))!=EOF){
    fputc(c,ptr2);
}
return 0;
}