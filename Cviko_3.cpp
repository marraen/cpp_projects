// cviko_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "trida.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	Complex *C = new Complex;

	C->set_real(5);
	C->set_imag(5);
	C->modul();
	cout << "faze je" << C->faze() << endl;
	delete C;
	
	system("pause");
    return 0;
}

