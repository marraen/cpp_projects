// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <stdio.h>
#include <vector>
#include "operace.h"

int main(int argc, char** argv)

{
	int choice;
	printf("vyberte z operaci:\n1) bublinkove trideni \n2) cramerovo pravidlo\n");
	scanf_s("%d", &choice);

	std::vector<int> values;
	for (int i = 1; i < argc; ++i) {
		values.push_back(atoi(argv[i]));
	}

	if (choice == 1) {
		bublinkove(values);

	}
/*	else if (o == 2) {
		cramerovo();
	}
*/
	system("pause");
	return 0;
}

