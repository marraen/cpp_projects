#include "stdafx.h"
#include "math.h"


class Complex
{
	double real, imag;

public:
	void set_real(double r);
	void set_imag(double i);

	double modul (void)
	{
		return sqrt(real*real + imag*imag);
	}
	
};

void Complex::set_real(double r)
{
	real = r;
}
void Complex::set_imag(double i)
{
	imag = i;
}
