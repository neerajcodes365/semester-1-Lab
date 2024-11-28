#include <stdio.h>
#include<ctype.h>
int main() {
    char a[1000];
    scanf("%s",a);

    for (int i = 0; a[i] != '\0'; i++) {
        if(islower(a[i])) a[i]=a[i]-32;
        printf("%c ", a[i]);
    }

    return 0;
}
