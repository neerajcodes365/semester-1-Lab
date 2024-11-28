#include <stdio.h>
int fibonacci(int n)
    {
        if ( n<=1)
            return n;
        else
            return (fibonacci(n-1) + fibonacci(n-2));
    }
int main()
{
    int n, y;
    printf("n");
    scanf("%d",&n); 
    printf("enter the number of nth factorial");
    printf("%d", y);
    y = fibonacci(n);
    return 0;
}

