#include <stdio.h>

int main() {
    int amin,bhr,cmin ;
    printf("Enter the time in minutes");
    scanf("%d",&amin);
    bhr=amin/60;
    cmin=amin%60;
    printf("%d hours",bhr);
    printf("%d minutes",cmin);
    return 0;
}