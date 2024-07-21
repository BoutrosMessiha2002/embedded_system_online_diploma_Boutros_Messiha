#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void reverse(char str[],int start,int end)
{
	char temp;
	if(start>=end)
	return;
	else
	{
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		reverse(str,start+1,end-1);
	}
}
int main(void) {
	char str[30];
	printf("Enter a sentence: ");
	fflush(stdout);
	gets(str);
	int start=0;
	int end=strlen(str)-1;
	reverse(str,start,end);
	printf("%s",str);
	return 0;
}