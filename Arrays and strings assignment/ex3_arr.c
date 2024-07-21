#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows,cols;
	printf("Enter rows and column of matrix: ");
	fflush(stdout);
	scanf("%d %d",&rows,&cols);
	printf("Enter elements of matrix:\n");
	int arr1[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	int arr2[cols][rows];
	printf("Transpose of Matrix:\n");
	for(int i=0;i<cols;i++)
	{
		for(int j=0;j<rows;j++)
		{
			arr2[i][j]=arr1[j][i];
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}