#include<stdio.h>
void nt(char *a){
    int i=0;
    while(a[i]!='\0' && i<100){
        printf("%c\n",a[i]);
        i++;
    }
}


int main(){
// char a1[]="sasi";
// char a2[]="vasu";        
// char *pa1;
// char *pa2;
// pa1=a1;
// pa2=&a2[0];
// printf("%d\n",pa1);
// printf(" %c\n",*pa1);
// pa1++;
// printf(" %c\n",*pa1);
char a1[100];
scanf("%s",a1);
nt(a1);
return 0;
}