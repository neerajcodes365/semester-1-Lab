#include <stdio.h>

int main()
{
    float markA,markB,markC,total, percentage ;
    printf("enter the mark of course A =");
    scanf("%f",&markA);
    printf("enter the mark of course B =");
    scanf("%f",&markB);
    printf("enter the mark of course C =");
    scanf("%f",&markC);
    total=markA+markB+markC;
    percentage=total/3;
    printf("course A = %f,\ncourse B=%f,\ncourse C=%f ,\ntotal=%f ,\npercentage=%f",markA,markB,markC,total,percentage);
    return 0;
}