#include<stdio.h>
int factorial(int a);
int factorial(int a){
    if (a >1){
    return a*factorial(a-1);
    }
    else 
    return 1;

}

int main(){
 int b;
 printf("enter the number");
 scanf("%d",&b);
 printf("%d",factorial(b));
return 0;
}