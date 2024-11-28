#include <stdio.h>

float Farenheit(float C)
	{
		float F;
		F = 1.8*C + 32;
		return F;
	}
int main()
{
	printf("Celsius                |                Fahrenheit\n");
	float n = 30;
	while (n <= 50)
	{
		printf("   %f          |           %f\n", n, Farenheit(n));
		n += 1;
	}
	return 0;
}
