#include<stdio.h>
int main(){
int a[5];
int x;
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("enter the value");
scanf("%d",&x);
for(int i=0;i<5;i++){
    if(a[i]==x){
        printf("%d %d %d",a[i],i+1,&a[i]);
    }
}

return 0;
}