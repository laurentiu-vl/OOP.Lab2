#include <iostream>
#include "Rational_number.h"
using namespace std;

Rational_number::Rational_number()
{

}

Rational_number::Rational_number(int nr_numarator, int nr_numitor)
{
		this->numerator = nr_numarator;
		this->denominator = nr_numitor;
}

int Rational_number::getter_den()
{
	return denominator;
}

int Rational_number::getter_num()
{
	return numerator;
}

void Rational_number::setter_den(int x)
{
	this->denominator = x;
}

void Rational_number::setter_num(int y)
{
	this->numerator = y;
}

void Rational_number::print()
{
	if (denominator == 0)
		cout << "Not possible";

	else if ((denominator > 0 && numerator > 0) || (denominator < 0 && numerator < 0))
	{
		cout << "Number is: " << abs(numerator) << "/" << abs(denominator);
	}

	else if (denominator < 0 || numerator < 0)
	{
		cout << "Number is: "<< "-" << abs(numerator) << "/" << abs(denominator);
	}
	cout << endl;
}


	Rational_number operator + (Rational_number const &numar1, Rational_number const &numar2) 
	{
		Rational_number numar3;
		numar3.numerator = numar1.numerator * numar2.denominator + numar2.numerator * numar1.denominator;
	    numar3.denominator = numar1.denominator * numar2.denominator;
		
		return numar3;
	}

	Rational_number operator * (Rational_number const& numar1, Rational_number const& numar2)
	{
		Rational_number numar3;
		numar3.numerator = numar1.numerator * numar2.numerator;
		numar3.denominator = numar1.denominator * numar2.denominator;

		return numar3;
	}

	Rational_number operator / (Rational_number const& numar1, Rational_number const& numar2)

	{
		Rational_number numar3;
		numar3.numerator = numar1.numerator * numar2.denominator;
		numar3.denominator = numar1.denominator * numar2.numerator;

		return numar3;
 	}




































/*
Rational_number Rational_number::add(Rational_number numar) //  4/3+5/4
{
		Rational_number r;
		r.numerator = numar.numerator * denominator + numerator * numar.denominator;
	    r.denominator = numar.denominator * denominator;

		return r;
 */


	/*return Rational_number(numar.getter_num() * numar2.getter_den() + numar2.getter_num() * numar.getter_den(), */
