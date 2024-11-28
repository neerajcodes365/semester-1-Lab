#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char c;
   int ch[]={1,2,3,4,5};
	
   while( ch[i] ) {
    //   putchar(toupper(str[i]));
    printf("%d \n",ch[i]);
      i++;
      if(i==5) break;
   }
   
   return(0);
}