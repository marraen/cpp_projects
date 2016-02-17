
#include "stdafx.h"
#include <iostream>
using namespace std;

#include <stdio.h>
#include "operace.h"
int main(int argc, _TCHAR* argv[])
{
	int o;
	printf("vyberte z operaci:\n1) bublinkove trideni \n2) cramerovo pravidlo\n");
	scanf_s("%d", &o);

	if (o == 1) {
		bublinkove();
	}
	else if (o == 2) {
		cramerovo();
	}

	system("pause");
	return 0;
}

