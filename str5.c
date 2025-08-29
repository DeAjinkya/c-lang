#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char str[20],ch;
	int i;
	int count = 0;
	printf("\n\tenter string: ");
	gets(str);
	printf("\n\n\t string is : %s", str);
	printf("\n\n\n");

	printf("\n\n\t enter the character to find count: ");
	scanf("%c", &ch);

	for (i = 0; str[i] != '\0'; i++) {

		if (str[i] == ch) {
			count++;
		}
	}
	printf("\n\t count %d", count);

}
