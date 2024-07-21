#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr1[2][2];
	float arr2[2][2];
	printf("Enter elements of first matrix\n");
	for(int i=0;i<2;i++)
	for(int j=0;j<2;j++)
	{
		printf("Enter a%d%d:",i+1,j+1);
		fflush(stdout);
		scanf("%f",&arr1[i][j]);
	}
	for(int i=0;i<2;i++)
	for(int j=0;j<2;j++)
	{
		printf("Enter b%d%d:",i+1,j+1);
		fflush(stdout);
		scanf("%f",&arr2[i][j]);
	}

	float arr3[2][2];
	for(int i=0;i<2;i++)
	for(int j=0;j<2;j++)
	{
		arr3[i][j]=arr1[i][j]+arr2[i][j];
	}
	printf("Sum of Matrix:\n%.1f %.1f\n%.1f %.1f",arr3[0][0],arr3[0][1],arr3[1][0],arr3[1][1]);
	return 0;
}

