// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "funkce.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	printf("Zadej cislo: ");
	scanf_s("%d", &i);
	sude(i);
	vsechnasuda(i);
	prvocislo(i);
	faktorial(i);
	system("pause");
    return 0;
}