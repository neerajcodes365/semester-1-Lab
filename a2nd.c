#include<stdio.h>
int main(){
    int num,digit,revnum=0;
    printf("enter a 4 digit number ");
    scanf("%d",&num);
    while (num!=0)
    {
        digit=num%10;
        revnum=revnum *10 + digit ;
        num/=10;
    }
    
    printf("reversed integer = %d",revnum);
return 0;
}