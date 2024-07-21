#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&a);
	if(a>0)
	printf("%d is positive",a);
	else if(a<0)
	printf("%d is negative",a);
	else if(a==0)
	printf("You entered 0");
	return 0;
}