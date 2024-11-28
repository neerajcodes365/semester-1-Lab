#include <stdio.h>

int main()
{
    int num,digit0,digit1,digit2,sum ;
    printf("enter the number");
    scanf("%d",&num);
    digit0=num%10;
    digit1=(num%100)/10;
    digit2=(num%1000)/100;
    sum=digit0+digit1+digit2;
    printf("digit0=%d,digit1=%d,digit2=%d,sum=%d",digit0,digit1,digit2,sum);
    

    return 0;
}