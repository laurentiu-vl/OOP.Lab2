#include <iostream>
#include <cmath>
#include "complex.h"
#define PI 3.14159265

using namespace std;

Complex::Complex()
{
	this->real = 0;
	this->imag = 0;
}

Complex::Complex(double a, double b)
{
	this->real = a;
	this->imag = b;
}

// return real part
double Complex::get_real()
{
	return this->real;
}

// return imaginary part
double Complex::get_imag()
{
	return this->imag;
}

// sets/changes real part
void Complex::set_real(double a)
{
	this->real = a;
}

// sets/changes imaginary part
void Complex::set_imag(double b)
{
	this->imag = b;
}

// prints a complex number
void Complex::show_compl()
{
	cout << this->real << " + " << this->imag << "i" << endl;
}

//adds 2 complex numbers
Complex Complex::add(Complex x)
{
	return Complex(this->real + x.real, this->imag + x.imag);
}

//multiplies 2 complex numbers
Complex Complex::mult(Complex x)
{
	return Complex(this->real * x.real - this->imag * x.imag, this->imag * x.real + this->real * x.imag);
}

//divides 2 complex numbers
Complex Complex::quot(Complex x)
{
	if (x.real == 0 && x.imag == 0)
	{
		cout << "Division by 0";
	}
	else
	{
		Complex Result;
		Result.real = (this->real * x.real + this->imag * x.imag) / (x.real * x.real + x.imag * x.imag);
		Result.imag = (this->imag * x.real - this->real * x.imag) / (x.real * x.real + x.imag * x.imag);
		return Result;
	}
}

//absolut value of a complex number
double Complex::abs()
{
	return sqrt(this->real * this->real + this->imag * this->imag);
}

//calculates the polar form of a complex number 'z = r*(cos(theta) + isin(theta)'
void Complex::compute_polar()
{
	double r = this->abs(), theta;

	if (this->real > 0)
		theta = atan(this->imag / this->real);
	else
		theta = atan(this->imag / this->real) + PI;

	cout << r << "* (cos(" << theta << ") + sin(" << theta << "))" << endl;
}

// prints exponential form 'z = r*e^(i*theta)'
void Complex::show_expo()
{
	double r = this->abs(), theta;

	if (this->real > 0)
		theta = atan(this->imag / this->real);
	else
		theta = atan(this->imag / this->real) + PI;

	cout << r << " * e^(i * " << theta << ")" << endl;
}

// checks if 2 complex numbers match

bool Complex::operator==(Complex x)
{
	return (this->real == x.real) && (this->imag == x.imag);
}
