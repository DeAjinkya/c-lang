#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void fun(int n) {
	if (n != 0) {
		fun(n - 1);
		printf(" %d", n);
		//fun(n - 1);
	}
}

int main()
{
	int no = 5;
	fun(no);

	return 0;
}