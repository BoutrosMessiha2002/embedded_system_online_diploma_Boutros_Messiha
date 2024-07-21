#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	int b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%d",&b);
	int temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a: %d\n",a);
	printf("After swapping, value of b: %d",b);

}