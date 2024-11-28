#include <stdio.h>

int main()
{
    int num, digit_first, digit_second, digit_third, digit_four, sum1, sum2, difference;
    printf("enter the number");
    scanf("%d", &num);

    digit_first = num / 1000;
    digit_second = (num / 100) % 10;
    digit_third = (num / 10) % 10;
    digit_four = (num % 10);
    
    sum1 = digit_first + digit_second;
    sum2 = digit_third + digit_four;
    
    difference = sum1 - sum2;
    
    printf("difference = %d", difference);
    return 0;
}