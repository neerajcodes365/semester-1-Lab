#include <stdio.h>

void readmarks(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void markstograde(int a[], char b[], int n)
{
    for (int j = 0; j < n; j++)
    {
        if (a[j] >= 80 && a[j] <= 100)
        {
            b[j] = 'A';
        }
        if (a[j] >= 60 && a[j] <= 79)
        {
            b[j] = 'B';
        }
        if (a[j] >= 50 && a[j] <= 59)
        {
            b[j] = 'P';
        }
        if (a[j] >= 0 && a[j] <= 49)
        {
            b[j] = 'F';
        }
    }
}

void printgradecount(char a[], int n)
{
    int a_count = 0, b_count = 0, p_count = 0, f_count = 0;
    for (int f = 0; f < n; f++)
    {
        if (a[f] == 'A')
            a_count++;
        if (a[f] == 'B')
            b_count++;
        if (a[f] == 'P')
            p_count++;
        if (a[f] == 'F')
            f_count++;
    }
    printf("A\t%d\nB\t%d\nP\t%d\nF\t%d", a_count, b_count, p_count, f_count);
}

int main()
{

    void readmarks(int a[], int n);
    void markstograde(int a[], char b[], int n);
    void printgradecount(char a[], int n);

    int n;
    scanf("%d", &n);

    int M[n];
    readmarks(M, n);

    char G[n];
    markstograde(M, G, n);

    printgradecount(G, n);

    return 0;
}
