#include "stdafx.h"
#include "funkce.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int sude(int n)
{
	if (n % 2 == 0)
		printf("cislo %d je sude\n", n);
	else
		printf("cislo %d je liche\n", n);
	return 0;

}


int vsechnasuda(int n)
{
	printf("\n\n");
	int i;
	for (i = 1; i <= n; i++)
		if (i % 2 == 0)
			printf("cislo %d je sude\n", i);
		else
			printf("cislo %d je liche\n", i);
	printf("\n\n");
	return 0;

}


int prvocislo(double n)
{
	int limit, i, je = 1;
	
	limit = (int)floor(sqrt(n));



	for (i = 2; i <= limit; i++)
		if (!((int)n % i))
			je = 0;

	if (n == 1) je = 0;
	if (je)
		printf("%d je prvocislo\n", n);
	else
		printf("%d neni prvocislo\n", n);
	return 0;
	
}

int vsechnaprvocisla (int n)
{
	printf("\n\n");
	int i;
	for (i = 1; i <= n; i++)
		if (i % 2 == 0)
			printf("cislo %d je sude\n", i);
		else
			printf("cislo %d je liche\n", i);
	printf("\n\n");
	return 0;

}

int faktorial(int n)

{
	int i, a = 1;
	for (i = 1; i <= n; i++){
		a=a*i;
	}

	printf("faktorial cisla %d je %d\n", n, a);
	return a;

}