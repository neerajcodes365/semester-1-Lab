#include <stdio.h>

char marks_Grade(float mark)
	{
		if (mark <= 100 && mark >= 80)
			printf("Grade: A\n");
		else if (mark <= 79 && mark >= 60)
			printf("Grade: B\n");
		else if (mark <= 59 && mark >= 50)
			printf("Grade: P\n");
		else if (mark <= 49 && mark >= 0)
			printf("Grade: F\n");
		else
			printf("Invalid mark\n");
	}

int main()
{
	int n;
	float mark;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	while (n>0)
	{
		printf("Enter mark: ");
		scanf("%f", &mark);
		marks_Grade(mark);
		n -=1;
	}
	return 0;
}