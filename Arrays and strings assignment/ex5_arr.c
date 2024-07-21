#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int trig=0;
	int number_of_elements;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&number_of_elements);
	int arr[number_of_elements];
	for(int i=0;i<number_of_elements;i++)
	{
		scanf("%d",&arr[i]);
	}
	int num;
	printf("Enter the element to be searched:\n ");
	fflush(stdout);
	scanf("%d",&num);
	int j;
	for(j=0;j<number_of_elements;j++)
	{
		if(arr[j]==num)
		{
			trig=1;
			break;
		}
		else
		trig=0;
	}
	if(trig==1)
	printf("Number found at the location: %d",j+1);
	else
	printf("Number not found.");
	return 0;
}