#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Areacircum(int, float*, float*);

void main() 
{
	int rad;
	float area, circum;
	printf("\n\t enter radius: ");
	scanf("%d", &rad);

	Areacircum(rad, &area, &circum);
	printf("\n\t area : %.2f", area);
	printf("\n\t circum: %.2f", circum);

	return 0;
}

void Areacircum(int r, float* a, float* c) {
	*a = 3.14 * r * r;
	*c = 2 * 3.14 * r;
}