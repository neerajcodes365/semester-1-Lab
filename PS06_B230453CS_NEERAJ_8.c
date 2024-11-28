#include <stdio.h>
int fibonacci(int n)
    {
        if (n<=1)
            return n;
        else
            return (fibonacci(n-1) + fibonacci(n-2));
    }
int main()
{
    int n, y;
    printf("enter the number ");
    scanf("%d",&n);
    y = fibonacci(n);
    printf("%d", y);
    return 0;
}
