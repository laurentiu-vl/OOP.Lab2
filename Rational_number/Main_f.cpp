#include <iostream>
#include "Main_f.h"
#include "Rational_number.h"
using namespace std;


void add()
{
	int num1, num2, numarator1, numarator2;

	cout << "Numerator of the first nr.: ";
	cin >> numarator1;
	cout << "Denominator of the first nr.: ";
	cin >> num1;

	cout << "Numerator of the second nr.: ";
	cin >> numarator2;
	cout << "Denominator of the second nr.: ";
	cin >> num2;

	Rational_number number(numarator1, num1);
	Rational_number number1(numarator2, num2);

	Rational_number number2 = (number + number1);
	number2.simply(number2);
	number2.print();
	cout << endl;
}

void decre()
{
	int num1, num2, numarator1, numarator2;

	cout << "Numerator of the first nr.: ";
	cin >> numarator1;
	cout << "Denominator of the first nr.: ";
	cin >> num1;

	cout << "Numerator of the second nr.: ";
	cin >> numarator2;
	cout << "Denominator of the second nr.: ";
	cin >> num2;

	Rational_number number(numarator1, num1);
	Rational_number number1(numarator2, num2);

	Rational_number number2 = (number - number1);
	number2.simply(number2);
	number2.print();
	cout << endl;
}

void multi()
{
	int num1, num2, numarator1, numarator2;

	cout << "Numerator of the first nr.: ";
	cin >> numarator1;
	cout << "Denominator of the first nr.: ";
	cin >> num1;

	cout << "Numerator of the second nr.: ";
	cin >> numarator2;
	cout << "Denominator of the second nr.: ";
	cin >> num2;

	Rational_number number(numarator1, num1);
	Rational_number number1(numarator2, num2);

	Rational_number number2 = (number * number1);
	number2.simply(number2);
	number2.print();
	cout << endl;
}

void divi()
{
	int num1, num2, numarator1, numarator2;

	cout << "Numerator of the first nr.: ";
	cin >> numarator1;
	cout << "Denominator of the first nr.: ";
	cin >> num1;

	cout << "Numerator of the second nr.: ";
	cin >> numarator2;
	cout << "Denominator of the second nr.: ";
	cin >> num2;

	Rational_number number(numarator1, num1);
	Rational_number number1(numarator2, num2);

	Rational_number number2 = (number / number1);
	number2.simply(number2);
	number2.print();
	cout << endl;
}