#include <stdio.h>

struct str
{
    char rno[20];
    int marks;
    union str2
    {
        char rslt;
        int marks2;
    }p;
} s[100];

int n;

void printresult()
{
    for(int i = 0;i<n;i++)
    {
        if (s[i].rno[0] == 'M')
        {
            printf("%s %c\n",s[i].rno,s[i].p.rslt);
        }
        else
        {
            printf("%s %d\n",s[i].rno,s[i].marks);
        }
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
        
        if (s[i].rno[0] == 'M')
        {
            if (s[i].marks>=50 && s[i].marks<=100) s[i].p.rslt = 'P';
            else if (s[i].marks>=0 && s[i].marks<=49) s[i].p.rslt = 'F';
        }
        else s[i].p.marks2 = s[i].marks;
    }

    printresult();
   
    return 0;
}
