#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char a[100];
    scanf("%s", a);

    // Convert lowercase to uppercase
     while (a[i])
    {
        if (islower(a[i]))
            a[i] = a[i] - 32; // Convert to uppercase
        i++;
        // if (i == 100)
        //     break;
    }

    i = 0; // Reset i for the next loop

    // Print characters
    while (a[i])
    {
        printf("%c", a[i]);
        i++;
        // if (i == 10)
        //     break;
    }

    return 0;
}
