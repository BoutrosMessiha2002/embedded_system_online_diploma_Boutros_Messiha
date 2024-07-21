#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&n);
	if(n<0)
	printf("Error!!! Factorial of negative number doesn't exist");
	else if(n==0)
	printf("Factorial = 1");
	else
	{
		int fact=1;
		for(int i=1;i<=n;i++)
		fact=fact*i;
		printf("Factorial = %d",fact);
	}
	return 0;
}