#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number_of_elements;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&number_of_elements);
	int arr[10];
	for(int i=0;i<number_of_elements;i++)
	{
		scanf("%d",&arr[i]);
	}
	int insertion;
	int location;
	printf("Enter the element to be inserted:\n ");
	fflush(stdout);
	scanf("%d",&insertion);
	number_of_elements++;
	printf("Enter the location:\n ");
	fflush(stdout);
	scanf("%d",&location);
	for(int j=number_of_elements;j>=location;j--)
	arr[j]=arr[j-1];
	arr[location-1]=insertion;
	for(int k=0;k<number_of_elements;k++ )
	printf("%d ",arr[k]);
	return 0;
}
