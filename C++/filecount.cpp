#include <stdio.h>
#include <stdlib.h>
int main()
{

	int upper = 0, lower = 0, special = 0;
	char c;

	FILE *fp = fopen("text.txt", "r");

	if (fp == NULL)
		printf("No file \n");    
	exit(0);

	while (1)
	{

		c = fgetc(fp);
		if (c == EOF)
			break;

		if (c >= 'A' && c <= 'Z')
			++upper;

		else if (c >= 'a' && c <= 'z')
			++lower;
		else
			++special;
	}

	fclose(fp);

	printf("Uppercase: %d\nLowercase: %d \n Special characters :%d", upper, lower, special);
	return 0;
}