#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	float product=num1*num2;
	printf("Product: %f",product);
}