#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&n);
	printf("%d",n*(n+1)/2);
	return 0;
}