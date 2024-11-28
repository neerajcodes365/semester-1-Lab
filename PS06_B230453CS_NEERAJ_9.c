#include <stdio.h>

int gcd(int a, int b)
    {
        if (a % b == 0)
            return b;
        else if (b == 0)
            return a;
        else
            return(gcd(b, a%b));
    }

int main()
{
    
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("GCD of %d and %d: %d", a, b,gcd(a, b));
}