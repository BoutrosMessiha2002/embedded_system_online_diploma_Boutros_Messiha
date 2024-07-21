#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	printf("Enter 3 numbers: ");
	fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("Largest number: %d",a);
		else
		printf("Largest number: %d",c);
	}
	else
	{
		if(b>c)
		printf("Largest number: %d",b);
		else
		printf("Largest number: %d",c);
	}
	return 0;
}
