#include <stdio.h>
int main()
{
    float c, d;
    printf("enter the temperature in celsius =");
    scanf("%f", &c);
    d = ((9.0 / 5.0) * c) + 32;
    if (c >= 30 && c <= 50)
    {

        printf("temperature in celsius is %f\n ", c);
        printf("temperature in farenheit is %f ", d);
    }
    else
        printf("enter temperature between 30 & 50");

    return 0;
}