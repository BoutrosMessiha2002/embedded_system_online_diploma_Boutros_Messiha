#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char op;
	printf("Enter operator either + or - or * or /:-");
	fflush(stdout);
	scanf("%c",&op);
	float num1,num2;
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(op)
	{
		case '+':
		printf("%.1f + %.1f= %.1f",num1,num2,num1+num2);
		break;

		case '-':
		printf("%.1f - %.1f= %.1f",num1,num2,num1-num2);
		break;

		case '*':
		printf("%.1f * %.1f= %.1f",num1,num2,num1*num2);
		break;

		case '/':
		printf("%.1f / %.1f= %.1f",num1,num2,num1/num2);
		break;

	}
	return 0;
}