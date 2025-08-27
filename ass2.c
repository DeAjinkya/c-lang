#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//pointer with function
void fun(int* p, int *q) {
	*p = 22;
	*q = 33;
}
void main()
{
	int a = 10,b = 20;
	printf("\n\n\t a:%d b:%d",a,b);
	fun(&a,&b);
	printf("\n\n\t a:%d b:%d", a,b);

	return 0;
}