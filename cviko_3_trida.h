#pragma once

#include "stdafx.h"
#include <Math.h>
#include <iostream>

class Complex
{
	double real, imag;

public:

	//konstruktor
	Complex(double n, double p)
	{
		real = n;
		imag = p;
	}

	void set_real(double r);
	void set_imag(double i);
	
	double get_real(void);
	double get_imag(void);
	
	
	double modul(void);
	double faze(void);

	void tisk (void);
};
