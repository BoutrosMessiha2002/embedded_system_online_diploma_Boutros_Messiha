#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void) {
	char str[30];
	printf("Enter a string: ");
	fflush(stdout);
	gets(str);
	int length=strlen(str);
	char temp;
	for(int i=0;i<length/2;i++)
	{
		temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=temp;
	}
	printf("%s",str);
	return 0;
}