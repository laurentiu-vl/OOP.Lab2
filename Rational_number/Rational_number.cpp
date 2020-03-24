#include <iostream>
#include "Rational_number.h"
using namespace std;

Rational_number::Rational_number() //constructor
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

void Rational_number::print() //print the number; more cases to check
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
		numar3.numerator = numar1.numerator * numar2.denominator + numar2.numerator * numar1.denominator; //overload the operator with +
	    numar3.denominator = numar1.denominator * numar2.denominator;
		
		return Rational_number(numar3.numerator, numar3.denominator);
	}

	Rational_number operator * (Rational_number const& numar1, Rational_number const& numar2) //overload the operator with *
	{
		Rational_number numar3;
		numar3.numerator = numar1.numerator * numar2.numerator;
		numar3.denominator = numar1.denominator * numar2.denominator;

		return (Rational_number(numar3.numerator, numar3.denominator));
	}

	Rational_number operator / (Rational_number const& numar1, Rational_number const& numar2) //overload the operator with /
	{
		Rational_number numar3;
		numar3.numerator = numar1.numerator * numar2.denominator;
		numar3.denominator = numar1.denominator * numar2.numerator;

		return Rational_number(numar3.numerator, numar3.denominator);
 	}

	Rational_number operator - (Rational_number const& numar1, Rational_number const& numar2) //overload the operator with -
	{
		Rational_number numar3;
		numar3.numerator = numar1.numerator * numar2.denominator - numar2.numerator * numar1.denominator;
		numar3.denominator = numar1.denominator * numar2.denominator;

		return (Rational_number(numar3.numerator, numar3.denominator));
	}

	
	int Rational_number::gcd(Rational_number numar1) //find the gr. common div. of denominator and numerator
	{
		if (numar1.denominator < 0)

			numar1.denominator = -numar1.denominator;

		if (numar1.numerator < 0)

			numar1.numerator = -numar1.numerator;

		while (numar1.denominator != numar1.numerator)
		{
			if (numar1.denominator > numar1.numerator)

				numar1.denominator -= numar1.numerator;

			else
			{
				numar1.numerator -= numar1.denominator;
			}
		}
		return numar1.denominator;
	}

	Rational_number Rational_number::simply(Rational_number numar)
	{
		int d = gcd(numar);
		return Rational_number(numar.numerator / d, numar.denominator / d);  //simplify the rational number
	}
