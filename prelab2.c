#include <stdio.h>

int main() {
    char arr[100];
    int i;
    scanf("%s",arr);
    // for ( i = 0; i < 5; i++) {
    //     scanf(" %c", &arr[i]);
    // }
    // printf("%d\n",i);
    // printf("%c\n",arr[33]);
    // printf("%c\n",arr[34]);


    // Manually add the null terminator
    // arr[i] = '\0';

    printf("hiiii");

    i = 0;
    while (arr[i] != '\0') {
        printf(" %c\n", arr[i]);
        i++;
    }

    return 0;
}
