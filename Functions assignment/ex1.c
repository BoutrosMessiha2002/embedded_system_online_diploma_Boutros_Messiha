#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void prime(int num1,int num2)
{
	printf("Prime numbers between %d and %d are: ",num1,num2);
	int trig=0;
	for(int i=num1;i<=num2;i++)
	{
		if(i==2||i==3||i==1)
		printf("%d ",i);
		else
		{
			for(int j=2;j<i;j++)
			if(i%j==0)
			{
				trig=0;
				break;
			}
			else
			trig=1;
		}
		if(trig==1)
		printf("%d ",i);
	}
}
int main(void) {
	int num1,num2;
	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	prime(num1,num2);
	return 0;
}