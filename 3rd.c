#include <stdio.h>
int main()
{
    int a, fact = 1;
    printf("enter the number");
    scanf("%d", &a);

    if (a > 0)
    {
        for (a; a > 0; a--)
        {
            fact = (a * 1) * fact;
        }
        printf("factorial = %d", fact);
    }
    else
        printf("enter a positive integer");
    return 0;
}