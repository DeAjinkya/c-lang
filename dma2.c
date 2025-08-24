#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, size, * arr;
	printf("\n\n\t enter size for array ");
	scanf("%d",&size);

	arr = (int*)malloc(sizeof(int) * size);
	
	//accept array
	printf("\n\n\t enter %d elements",size);
	for (i = 0; i < size; i++)
		scanf("%d",&arr[i]);

	printf("\n\n\t ***array*** \n\n");
	for (i = 0; i < size; i++)
		printf(" %d",arr[i]);

	free(arr);

}