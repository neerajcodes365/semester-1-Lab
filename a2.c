#include <stdio.h>
int main()
{
    int a[3][2];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter the %d,%d th number ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("[ %d %d \n  %d %d \n  %d %d ]", a[0][0], a[0][1], a[1][0], a[1][1], a[2][0],a[2][1]);
    return 0;
}