#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char str[20];
	int i;
	int count = 0;
	printf("\n\tenter string: ");
	gets(str);
	printf("\n\n\t string is : %s", str);
	printf("\n\n\n");

	for (i = 0; str[i] != i; i++) {
		if (str[i] == 'o') {
			count++;
		}
	}
	printf("\n\t count %d", count);

}
/*
enter string: hello world
string is : hello world
count 2
*/