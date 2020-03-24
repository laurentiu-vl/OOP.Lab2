#pragma once

class Complex {

private:

	double real;
	double imag;

public:

	double get_real();

	void set_real(double x);

	double get_imag();

	void set_imag(double x);

	void show_compl();

	void show_expo();

	// default constructor
	Complex();

	// constructor with the real and imaginary parts given
	Complex(double a, double b);

	// adds 2 complex numbers
	Complex add(Complex x);

	// multiplies 2 complex numbers
	Complex mult(Complex x);

	// divides 2 complex numbers
	Complex quot(Complex x);

	// absolute value of complex number
	double abs();

	// polarform of a complex number
	void compute_polar();

	bool operator == (Complex x);
};