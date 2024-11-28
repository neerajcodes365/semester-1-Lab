#include <stdio.h>
int main()
{
    int a, b, c;
    float x ;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("enter the value of c = ");
    scanf("%d", &c);
    printf("enter the value of x = ");
    scanf("%f", &x);

    printf("result of expression = %f",((a*x*x)+(b*x)+c));
    return 0;
}