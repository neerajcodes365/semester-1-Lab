-#include <stdio.h>

float getWeeklySalary(int work, float hrate)
	{
		float salary=0;
		if (work <= 40)
			salary = hrate*work;
		else
			salary = hrate*40 + hrate*(work-40)/2;
		printf("Salary = %f\n", salary);
	}

	
int  main()
{

	int n, work;
	float hrate;
	printf("Enter the number of employees: ");
	scanf("%d", &n);
	while (n>0)
	{
		printf("Enter number of hours of work per week: ");
		scanf("%d", &work);
		printf("Enter hourly rate: ");
		scanf("%f", &hrate);
		getWeeklySalary(work, hrate);
		n -= 1;
	}
	return 0;
}
