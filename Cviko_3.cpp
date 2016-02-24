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
	C->get_real();
	C->get_imag();
	cout << "modul komplexniho cisla je"<< C->modul() << endl;
	cout << "faze komplexniho cisla je" << C->faze() << endl;
	C->tisk();
	delete C;
	
	system("pause");
    return 0;
}

