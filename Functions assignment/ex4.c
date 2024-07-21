#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int power(int num,int power_num)
{
	if(power_num==0)
	return 1;
	else
	return num*power(num,power_num-1);
}
int main(void) {
	int num;
	int power_num;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Enter power number: ");
	fflush(stdout);
	scanf("%d",&power_num);
	printf("%d ^ %d = %d",num,power_num,power(num,power_num));

	return 0;
}