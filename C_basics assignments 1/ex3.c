#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	int sum=num1+num2;
	printf("Sum: %d",sum);
}
