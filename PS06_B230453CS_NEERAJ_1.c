#include <stdio.h>

int sumDigits(int num)
{
	int digit, sum = 0;
	while (num != 0)
	{
		digit = num % 10;
		num = num / 10;
		sum += digit;
	}
	return sum;
}

int main()
{

	int a;
	printf("Enter a non-negative integer: ");
	scanf("%d", &a);
	printf("Sum of the digits: %d\n", sumDigits(a));
	return 0;
}

