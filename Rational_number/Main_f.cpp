#include <iostream>
#include "Main_f.h"
#include "Rational_number.h"
using namespace std;


void add()
{
	int num1, num2, numarator1, numarator2;
	
	cout << "***ADD***" << endl;
	cout << "Numerator of the first nr.: ";
	cin >> numarator1;
	cout << "Denominator of the first nr.: ";
	cin >> num1;
	cout << endl;

	cout << "Numerator of the second nr.: ";
	cin >> numarator2;
	cout << "Denominator of the second nr.: ";
	cin >> num2;
	cout << endl;

	Rational_number number100(numarator1, num1);
	Rational_number number200(numarator2, num2);

	Rational_number number10 = number100 +number200;
	number10 = number10.simply(number10);
	number10.print();
	cout << endl;
}

void decre()
{
	int num1, num2, numarator1, numarator2;

	cout << "***DECRE***" << endl;
	cout << "Numerator of the first nr.: ";
	cin >> numarator1;
	cout << "Denominator of the first nr.: ";
	cin >> num1;
	cout << endl;

	cout << "Numerator of the second nr.: ";
	cin >> numarator2;
	cout << "Denominator of the second nr.: ";
	cin >> num2;
	cout << endl;

	Rational_number number100(numarator1, num1);
	Rational_number number200(numarator2, num2);

	Rational_number number10 = number100 - number200;
	number10 = number10.simply(number10);
	number10.print();
	cout << endl;
}

void multi()
{
	int num1, num2, numarator1, numarator2;

	cout << "***MULTI***" << endl;
	cout << "Numerator of the first nr.: ";
	cin >> numarator1;
	cout << "Denominator of the first nr.: ";
	cin >> num1;
	cout << endl;

	cout << "Numerator of the second nr.: ";
	cin >> numarator2;
	cout << "Denominator of the second nr.: ";
	cin >> num2;
	cout << endl;

	Rational_number number1(numarator1, num1);
	Rational_number number2(numarator2, num2);

	Rational_number number10 = (number1 * number2);
	number10 = number10.simply(number10);
	number10.print();
	cout << endl;
}

void divi()
{
	int num1, num2, numarator1, numarator2;

	cout << "***DIVI***" << endl;
	cout << "Numerator of the first nr.: ";
	cin >> numarator1;
	cout << "Denominator of the first nr.: ";
	cin >> num1;
	cout << endl;

	cout << "Numerator of the second nr.: ";
	cin >> numarator2;
	cout << "Denominator of the second nr.: ";
	cin >> num2;
	cout << endl;

	Rational_number number1(numarator1, num1);
	Rational_number number2(numarator2, num2);

	Rational_number number10 = number1 / number2;
	number10 = number10.simply(number10);
	number10.print();
	cout << endl;
}