#include "stdafx.h"
#define _USE_MATH_DEFINES
#include "math.h"
#include <iostream>
#include "trida.h"

using namespace std;

void Complex::set_real(double r)
{
	real = r;
}
void Complex::set_imag(double i)
{
	imag = i;
}
double Complex::get_real(void)
{
	return real;
}

double Complex::get_imag(void)
{
	return imag;
}

double Complex::modul(void)
{
	return sqrt(real*real + imag*imag);
}
double Complex::faze(void)
{
	return acos(imag / sqrt(real*real + imag*imag))*(180/M_PI);
}

void Complex::tisk(void)
{
	cout << "vase cislo je" << get_real() << "+j" << get_imag() << endl;
}
