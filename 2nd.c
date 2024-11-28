#include <stdio.h>
int main()
{

    float mark, avg, sum = 0;
    int s = 0, num;
    do
    {
        s+=1;
        printf("enter the mark = ");
        scanf("%f", &mark);
        sum=mark+sum;
        printf("enter a non negative number to continue");
        scanf("%d", &num);

    } while (num > 0);
    printf(" total mark is equalto %f",sum);
    printf(" average is %f", (sum/s));

    return 0;
}