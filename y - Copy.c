#include <stdio.h>
typedef struct student
{
    char name[15];
    int rollno;
    int marks;
} student;

student s1[5];

int sum(student *x){
    int total = 0;
     for (int i = 0; i < 5; i++){
       total=(x[i].marks) + total;
     }
     return total;
}

int main() 
{
    int y;
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", s1[i].name);
        scanf("%d", &s1[i].rollno);
        scanf("%d", &s1[i].marks);
        printf("%d th student data entry is over", i+1);
    }
    y=sum(s1);
    printf("%d",y);
    return 0;
}