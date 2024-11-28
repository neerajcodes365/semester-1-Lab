// wrong prbm !!!!!!!!!!!!!!!!!!!!!!!!!!!!




#include <stdio.h>
int main()
{
    int week_1, week_2, week_3, week_4, week_5, total_weeks;
    float daily_wage, sum = 0;
    printf("number of days per week1 = ");
    scanf("%d", &week_1);
    printf("number of days per week2 = ");
    scanf("%d", &week_2);
    printf("number of days per week3 = ");
    scanf("%d", &week_3);
    printf("number of days per week4 = ");
    scanf("%d", &week_4);
    printf("number of days per week5 = ");
    scanf("%d", &week_5);

    total_weeks = week_1 + week_2 + week_3 + week_4 + week_5;

    printf("daily wage = ");
    scanf("%f", &daily_wage);

    if (total_weeks > 31)
    {
        printf("enter valid number of weeks!!!!!");
    }

    else
    {
        if (week_1 >= 0 && week_1 <= 7)
        {
            if (week_1 <= 3)
            {
                sum = (week_1 * daily_wage) + sum;
                printf("%f", sum);
            }
            else
                sum = (3 * daily_wage) + (week_1 - 3) * daily_wage * (3 / 4) + sum;
            printf("%f", sum);
        }
        else
            printf("enter a valid number");




        if (week_2 >= 0 && week_2 <= 7)
        {
            if (week_2 <= 3)
            {
                sum = (week_2 * daily_wage) + sum;
                printf("%f", sum);
            }
            else
                sum = (3 * daily_wage) + (week_2 - 3) * daily_wage * (3 / 4) + sum;
            printf("%f", sum);
        }
        else
            printf("enter a valid number");





        if (week_3 >= 0 && week_3 <= 7)

        {
            if (week_3 <= 3)
            {
                sum = (week_3 * daily_wage) + sum;
                printf("%f", sum);
            }

            else
                sum = (3 * daily_wage) + (week_3 - 3) * daily_wage * (3 / 4) + sum;
            printf("%f", sum);
        }
        else
            printf("enter a valid number");





        if (week_4 >= 0 && week_4 <= 7)
        {
            if (week_4 <= 3)
            {
                sum = (week_4 * daily_wage) + sum;
                printf("%f", sum);
            }
            else
                sum = (3 * daily_wage) + (week_4 - 3) * daily_wage * (3 / 4) + sum;
            printf("%f", sum);
        }
        else
            printf("enter a valid number");





        if (week_5 >= 0 && week_5 <= 7)
        {
            if (week_5 <= 3)
            {
                sum = (week_5 * daily_wage) + sum;
                printf("%f", sum);
            }
            else
                sum = (3 * daily_wage) + (week_5 - 3) * daily_wage * (3 / 4) + sum;
            printf("%f", sum);
        }
        else
            printf("enter a valid number");



    }


    printf(" monthly salary = %f", sum);

    return 0;
}