#include <stdio.h>

int isPrime(int num)
	{
		for (int i=2; i<num; i++)
		{
			if (num%i ==  0)
			{
				return 0;
				break;
			}
			else
				continue;
		}
		return 1;
	}

int main()
{

	int lower, upper;
	printf("Lower Bound; ");
	scanf("%d", &lower);
	printf("Upper Bound: ");
	scanf("%d", &upper);
	printf("Prime numbers in the range %d to %d: ", lower, upper);
	if (lower == 1)
	    lower++;
	if (isPrime(lower)==1)
	{
		printf("%d", lower);
		lower++;
	}
	for (lower;lower<=upper; lower++)
	{
		if (isPrime(lower)==1)
			printf(", %d", lower);
	}
}