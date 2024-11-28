#include<stdio.h>

int arr[5] = {1,2,3,4,5};

void printarr()
{
    for(int i = 0;i<5;i++) printf("%d\n",*(arr+i));    //*(ptr + i) = ptr[i]
}

int main()
{
    printarr();
    return 0;
}