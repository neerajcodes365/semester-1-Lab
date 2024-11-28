#include <stdio.h>
int n;
int M[100];
int G[100];

void printGradeCount(void);
char marksToGrade(int );
int gradeCount(char );

int main()
{
    scanf("%d",&n);
    if (n<5 || n >100)
    {
        printf("Invalid\n");
        return 0;
    }
    
    for (int i = 0;i<n;i++)
    {
        scanf("%d",&M[i]);
        G[i] = marksToGrade(M[i]);
    }
    printGradeCount();
    return 0;
}
char marksToGrade(int j)
{
    if (j<=100 && j>=80) return 'A';
    else if (j<80 && j>=60) return 'B';
    else if (j<60 && j>=50) return 'P';
    else if (j<50 && j>=0) return 'F';
}

int gradeCount(char c)
{
    int count = 0;
    for (int i=0;i<n;i++)
    {
        if (G[i]== c) count++;  
    }
    return count;
}

void printGradeCount()
    {
        int a,b,p,f;
        printf("Grade    Count\n");
        printf(" A        %d\n",gradeCount('A'));
        printf(" B        %d\n",gradeCount('B'));
        printf(" P        %d\n",gradeCount('P'));
        printf(" F        %d\n",gradeCount('F'));

        return;
    }

