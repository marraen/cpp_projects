
// cviko_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#include "trida.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Complex *C = new Complex;

	C->set_real(5);
	C->set_imag(3);
	cout << C->modul() << endl;

	delete C;
    return 0;
}

