#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int factorial(int num)
{
	if(num==0)
	return 1;
	else
	return num*factorial(num-1);
}
int main(void) {
	int num;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d = %d",num,factorial(num));
	return 0;
}