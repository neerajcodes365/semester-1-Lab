#include <stdio.h>
int main()
{
    int i = 1, marks;
    int countA = 0, countB = 0, countP = 0, countF = 0;

    do
    {
        printf("enter the marks of student %d  = ", i);
        i+=1;
        scanf("%d", &marks);

                if (marks <= 100 && marks >= 80)
        {
            countA += +1;
        }

        else if (marks <= 79 && marks >= 60)
        {
            countB += 1;
        }

        else if (marks <= 59 && marks >= 50)
        {
            countP += 1;
        }

        else if (marks <= 49 && marks >= 0)
        {
            countF += 1;
        }

    } while (marks != -1);

    printf("the total number of students with grade A =%d\n", countA);
    printf("the total number of students with grade B =%d\n", countB);
    printf("the total number of students with grade P =%d\n", countP);
    printf("the total number of students with grade F =%d\n", countF);

    return 0;
}