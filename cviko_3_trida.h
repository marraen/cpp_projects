#pragma once
#include "math.h"

class Complex
{
	double real, imag;

public:
	void set_real(double r);
	void set_imag(double i);

	double modul(void)
	{
		return sqrt(real*real + imag*imag);
	}

	double faze(void)
	{
		return (acos(imag))/modul();
	}

};
