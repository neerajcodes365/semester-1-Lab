#include<stdio.h>
int main(){
    float marks;
    char a,b,p,f;
    a='A',b='B',p='P',f='F';

    printf("enter the marks = ");
    scanf("%f",&marks);

if (marks >100 || marks<0 ){
    printf("invalid input,marks should be in between 0 - 100");
}

if (marks<= 100){
    if (marks>=80){
        printf("Grade = %c",a);
            }
        }

if (marks<=79){
    if (marks >= 60){
        printf("Grade = %c",b);
            }
        }

if (marks<=59){
    if (marks >= 50){
        printf("Grade = %c",p);
            }
        }

if (marks<=49){
    if (marks >= 0){
        printf("Grade = %c",f);  
    }  
}
return 0;
}
