#include <stdio.h>
int main()
{
    int n, marks;
    int countA = 0, countB = 0, countP = 0, countF = 0;
    printf("enter total of no of students");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("enter the mark of student %d= ", i );
        scanf("%d", &marks);

        // int countA = 0, countB = 0, countP = 0, countF = 0;

        if (marks <= 100 && marks >= 80)
        {
            countA +=+1;
        }

        else if (marks <= 79 && marks >= 60)
        {
            countB +=1;
        }

        else if (marks <= 59 && marks >= 50)
        {
            countP +=1;
        }

        else if (marks <= 49 && marks >= 0)
        {
            countF +=1;
        }

        else
        {
            printf("enter valid marks");
        }
    }


    printf("the total number of students with grade A =%d\n", countA);
    printf("the total number of students with grade B =%d\n", countB);
    printf("the total number of students with grade P=%d\n", countP);
    printf("the total number of students with grade F =%d\n", countF);
    return 0;
}