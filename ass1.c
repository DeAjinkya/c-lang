#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int a = 10, b = 30, c = 6;
	int* p = &a, * q = &b;

	printf("\n\n\t a:%d b:%d", a, b);// value of a and b
	printf("\n\n\t *p:%u *q:%u", *p, *q);// value of a and b

	*p = 33;
	*q = 44;
	printf("\n\n\t a:%d b:%d", a, b);
	printf("\n\n\t *p:%u *q:%u", *p, *q);

	p = &c;
	printf("\n\n\t *p:%u *q:%u", *p, *q);// 6 , 44

	return 0;

}