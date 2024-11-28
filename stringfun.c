#include<stdio.h>
#include<string.h>

typedef struct aasde{
    int mark;
    char grade[2];
} s;


int main(){
    s s1;
    scanf("%d",&s1.mark);
    scanf("%s",s1.grade);
    printf("%d",s1.mark);
    printf("%s",s1.grade);
   strcpy(s1.grade,"as");
   printf("%d\n",s1.mark);
    printf("%s",s1.grade);

return 0;
}
