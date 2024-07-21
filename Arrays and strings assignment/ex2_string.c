#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[30];
	printf("Enter a string: ");
	fflush(stdout);
	gets(str);
	int i;
	for (i=0;str[i]!='\0';i++);
	printf("Length of string: %d",i);
	return 0;
}