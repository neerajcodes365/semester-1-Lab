#include<stdio.h>
int main(){

    float salary,hourly_rate;
    int work_hours,extra_hours;
    
    printf("number of hrs per week =");
    scanf("%d",&work_hours);
    printf("hourly rate =");
    scanf("%f",&hourly_rate);

    extra_hours=work_hours%40;

    if (extra_hours!=0){
        salary=(40*hourly_rate)+((hourly_rate/2)*extra_hours);
        printf("weekly salary = %f",salary);
        printf(" extra hours = %d",extra_hours);
    }
    
    
    else {
        salary=hourly_rate*work_hours;
        printf("weekly salary = %f",salary);
    }

return 0;
}
