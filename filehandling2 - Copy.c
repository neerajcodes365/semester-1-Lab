#include<stdio.h>
int main(){
 FILE *ptr;
 ptr=fopen("iloveU.txt","w");
 fprintf(ptr,"i love you 3000 bitch");
 fclose(ptr);
return 0;
}

