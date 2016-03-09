
#pragma once
#include "stdafx.h"
#include <iostream>

class Atributy
{
protected:
	int typ;
	double stranaA, stranaB, stranaC, stranaD, vyska, polomer;
public:
	Atributy(double A, double B, double C, double D, double v, double r) {
		stranaA = A;
		stranaB = B;
		stranaC = C;
		stranaD = D;
		vyska = v;
		polomer = r;
	}

	virtual double obvod() {
		double obvod = 0;
		obvod = stranaA + stranaB + stranaC + stranaD;
		return obvod;
	}

	virtual double obsah() {
		double obsah = 0;
		obsah = stranaA * stranaB;
		return obsah;
	}

	virtual string vypis_obvod(string obvod) {

		return string("obvod utvaru: " + obvod);
	}

	virtual string vypis_obsah(string obsah) {

		return string("obsah utvaru: " + obsah);
	}




	
	virtual string console_string(void) {
		return string("Strana A: " + stranaA + "Strana B: " + stranaB + "Strana C: " + stranaC + "vyska: " + vyska + "polomer: " + polomer);
	}
	void tisk(void) {
		printf("%lf", console_string);
	}
};

class Tvar : public Atributy
{
protected:
	char nazev;
public:
	Tvar(double A, double B, double C, double D, double v, double r, char n) : Atributy(A, B, C, D, v, r)
	{
		nazev = n;
	}

	virtual string console_string(void)
	{
		return string("Strana A : " + stranaA + "Strana B : " + stranaB + "Strana C : " + stranaC + "vyska : " + vyska + "polomer : " + polomer + "nazev: " + nazev);
	}

};

class Kruh : public Atributy
{
public:
	Kruh(double a) : Atributy(r);
	

	
};

