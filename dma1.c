#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 4;
	int* ptr;

	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("memory cannot be allocated");
		return 0;
	}

	printf("Allocated memory\n");
	for (int i = 0; i < n; ++i) {
		printf("%p \n", ptr + i);
	}

	n = 6;

	ptr = (int*)realloc(ptr, sizeof(int) * 6);

	printf("newly allocated memory\n");
	for (int i = 0; i < n; ++i) {
		printf("%p\n",ptr+i);
	}

	free(ptr);
	return 0;
}