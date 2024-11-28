#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int smallest(int a[])
{
    int j = a[0];
    int small_pstn = 0;
    for (int l = 0; l < 5; l++)
    {
        if (j > a[l])
        {
            j = a[l];
            small_pstn = l;
        }
    }
    return small_pstn;
}

int main()
{
    int y;
    void swap(int *a, int *b);
    int smallest(int a[]);

    int a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    y = smallest(a);
    swap(&a[y], &a[0]);


     for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}