#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char str[20];
	int i;
	printf("\n\tenter string: ");
	gets(str);
	printf("\n\n\t string is : %s", str);
	printf("\n\n\n");

	for (i = 0; str[i] != '\0'; i++)
		printf("\n\t%c", str[i]);
}
//output:-
//enter string : hii sir
//string is : hii sir
