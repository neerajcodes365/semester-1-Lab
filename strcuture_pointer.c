#include<stdio.h>
typedef struct stu{
    int mark;
    char grade;
    
}student;
student s1;
student *ps1=&s1;

void f(student *s){
    s->mark+=10;
    s->grade='S';
}



int main(){

    printf("grade\n");
scanf("%c",&s1.grade);
printf("mark\n");

scanf("%d",&s1.mark);

printf("%d %c \n",s1.mark,s1.grade);
f(ps1);
printf("%d %c\n",s1.mark,s1.grade);


return 0;
}