#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include "operace.h"

using namespace std;


int bublinkove(std::vector<int> &values)
{
	int c, d;
	_TCHAR swap;

	printf("zadavam %d prvku\n", values.size());

	for (c = 0; c < values.size(); c++)
	{
		for (d = 0; d < values.size() - c - 1; d++)
		{
			if (values[d] > values[d + 1])
			{
				swap = values[d];
				values[d] = values[d + 1];
				values[d + 1] = swap;
			}
		}
	}

	printf("setrizene prvky jsou:\n");

	for (c = 0; c < values.size(); c++)
		printf("%d\n", values[c]);

	return 0;
}


/*
int cramerovo()
{
	int A[3][3], B[1][3], i;

	printf("Zadejte 1.  sloupec matice A\n");
	for (i = 1; i < 4; i++){
		scanf_s("%d", &A[1][i]);
	}
	printf("Zadejte 2. sloupec matice A\n");
	for (i = 1; i < 4; i++){
		scanf_s("%d", &A[2][i]);
	}
	printf("Zadejte 3. sloupec matice A\n");
	for (i = 1; i < 4; i++){
		scanf_s("%d", &A[3][i]);
	}
	printf("Zadejte jeden sloupec matice B\n");
	for (i = 1; i < 4; i++){
		scanf_s("%d", &B[1][i]);
	}

	double detA, detA1, detA2;

	detA = (A[1][1] * A[2][2] * A[3][3] + A[2][1] * A[3][2] * A[1][3] + A[3][1] * A[1][2] * A[2][3]) - (A[1][3] * A[2][2] * A[3][1] + A[2][3] * A[3][2] * A[1][1] + A[3][3] * A[1][2] * A[2][1]);
	printf("detA=%lf", detA);

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
*/
