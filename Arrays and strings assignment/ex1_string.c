#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[30];
	printf("Enter a string: ");
	fflush(stdout);
	gets(str);
	char c;
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&c);
	int freq=0;
	for(int i=0;i<sizeof(str);i++)
	{
		if(str[i]==c)
		freq++;
	}
	printf("Frequency of %c = %d ",c,freq);
	return 0;
}