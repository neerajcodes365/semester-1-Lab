#include <stdio.h>
int main()
{
    int n, x = 0;
    printf("enter the number");
    scanf("%d", &n);
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                x = x + 1;
            }
        }
        if (x > 2)
        {
            printf("%d is not a prime number", n);
        }
        else
        {
            printf("%d is a prime number ", n);
        }
    }
    else if (n==1)
    {
        printf("1 is not a prime number");
    }
    else 
    {
        printf("enter a valid number");
    }
    return 0;
}