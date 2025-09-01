//write a program to accept and display
//array of 5 elements 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int arr[5];
	int i;
	//accept array element
	printf("\n\t enter five elements: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	//display array
	printf("\n\t array elements are: ");
	for (i = 0; i < 5; i++)
		printf(" %d", arr[i]);
	return 0;
}