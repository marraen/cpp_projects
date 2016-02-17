#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "operace.h"

using namespace std;


int bublinkove()
{
int array[100], n, c, d, swap;

printf("zadejte pocet prvku trideneho retezce:\n");
scanf_s("%d", &n);

printf("zadej %d prvku\n", n);

for (c = 0; c < n; c++)
	scanf_s("%d", &array[c]);

for (c = 0; c < (n - 1); c++)
{
	for (d = 0; d < n - c - 1; d++)
	{
		if (array[d] > array[d + 1])
		{
			swap = array[d];
			array[d] = array[d + 1];
			array[d + 1] = swap;
		}
	}
}

printf("setrizene prvky jsou:\n");

for (c = 0; c < n; c++)
	printf("%d\n", array[c]);
return 0;
}

int cramerovo()
{
	int rows=3, cols=3;
	int **A;
	A = new int*[rows];
	for (int i = 0;i < rows;i++)
		A[i] = new int[cols];
	for (int i = 0;i < rows;i++)

	


		delete[] A[i];
	delete[] A;

	return 0;



}
