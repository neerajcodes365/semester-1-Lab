#include<stdio.h>
int main(){
char name[]="neeraj";
char *ptr=name;
// for(int i=0;i<8;i++){
    while (*ptr!='\0')
    { 
        printf("%d - %c \n",ptr,*ptr);
        ptr++;
    }
    
return 0;
} 