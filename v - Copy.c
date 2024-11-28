// C Program to illustrate the strcat function 
#include <stdio.h> 
#include <string.h>
int main() 
{ 
	char dest[50] = "This is an"; 
	char src[50] = " example"; 

	printf("dest Before: %s\n", dest); 

	// concatenating src at the end of dest 
	strcat(&dest[0], &src[0]); 

	printf("dest After: %s", dest); 

	return 0; 
}
