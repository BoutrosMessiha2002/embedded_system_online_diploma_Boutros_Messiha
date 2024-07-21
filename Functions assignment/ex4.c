#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	float sum=0;
	for(int i=0;i<n;i++)
	{
		printf("Enter number: ");
		fflush(stdout);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Average = %f",sum/n);
	return 0;
}