#include <stdio.h>
int main()
{

    float marks;
    char a, b, p, f;
    a = 'A', b = 'B', p = 'P', f = 'F';

    printf("enter the marks = ");
    scanf("%f", &marks);

    if (marks >= 0 && marks <= 100)
    {

        if (marks >= 80) printf("%c", a);
        if (marks >= 60 && marks <= 79) printf(" Grade = %c", b);
        if (marks >= 50 && marks <= 59) printf("Grade = %c", p);
        if (marks>=0 && marks<=49) printf("Grade = %c", f);
          
                      
    }
            

    else
    {
        printf("enter valid mark");
    }
    return 0;
}

