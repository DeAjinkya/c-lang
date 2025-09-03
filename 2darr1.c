#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//accept and display 2d array
void main()
{
	int arr[2][3], i, j, sum;
	printf("\n\n");
	for (i = 0; i < 2; i++) {
		printf("\n\nenter elements: ");
		for (j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	//displaying the data
	for (i = 0; i < 2; i++) {
		sum = 0;
		printf("\n\2d array elements: ");
		for (j = 0; j < 3; j++) {
			sum = sum + arr[i][j];
			printf("%d", arr[i][j]);
		}
		printf("\t sum: %d", sum);
	}
}