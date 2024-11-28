#include <stdio.h>

struct str{
    char rno[10];
    int marks;
    char grade;
};
struct str s[100];
int n;

char markstograde(int n)
{
    if (n<=100 && n>=80) return 'A';
    if (n<=79 && n>=60) return 'B';
    if (n<=59 && n>=50) return 'P';
    if (n<=49 && n>=0) return 'F';
}

void printstudent(struct str s)
{
    printf("%s %d %c",s.rno,s.marks,s.grade);
    return;
}

void printresult(int j)
{
    for (int i=0;i<n;i++)
    {
        printstudent(s[i]);
        printf("\n");
    }
    return;
}

int main()
{
    do
    {
        printf("Enter number of students: ");
        scanf("%d",&n);
        if (n<1 || n>100) printf("Invalid\n");
    } while (n<1 || n>100);
   
    for( int i=0;i<n;i++)
    {
        printf("Enter rollno. of student %d: ",i+1);
        scanf("%s",s[i].rno);
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&s[i].marks);
        s[i].grade = markstograde(s[i].marks);
    }

    printresult(n);
   
    return 0;
}
