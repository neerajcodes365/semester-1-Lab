#include<stdio.h>
void str_copy(char*s1,char*s2){
    while ((*s1=*s2)!='\0')
    {
       s1++;
       s2++;
    }
    
}
int main(){
char s_1[]="abcde";
char s_2[]="fghij";
str_copy(s_1,s_2);
for(int i=0;i<5;i++){
    printf("%c",s_1[i]);
}
return 0;
}