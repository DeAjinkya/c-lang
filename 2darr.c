#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//accept and display 2d array
void main()
{
	int arr[2][3], i, j;
	printf("\n\n");
	for (i = 0; i < 2; i++) {
		printf("\n\nenter elements: ");
		for (j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	//displaying the data
	for (i = 0; i < 2; i++) {
		printf("\n\2d array elements: ");
		for (j = 0; j < 3; j++) {
			printf("%d", arr[i][j]);
		}
	}
}