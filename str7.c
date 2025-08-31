#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// reverse a string 
int Len(char*);

void main()
{
	char str[15], temp;
	int i, j, len;
	printf("\n\n\t enter the string: ");
	gets(str);
	printf("\n\n\t string %s",str);
	len = Len(str);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("\n\n\t string %s", str);
	return 0;

}

int Len(char* s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}