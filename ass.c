#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int a = 10;
	int *p;
	p = &a;
	// address of a is value of p
	printf("\n\t a : %d", a);
	printf("\n\t &a : %u", &a);
	printf("\n\t p : %u", p);
	printf("\n\t *p : %u", *p);
	
	*p = 40;
	printf("\n\t value of a: %d", a);

	return 0;
}