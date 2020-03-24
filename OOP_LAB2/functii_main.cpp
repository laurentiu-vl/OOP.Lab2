#include <iostream>
#include "functii_main.h"
#include "tests.h"
#include "complex.h"
using namespace std;

void Tests_to_show()
{
	Complex a(2, 7);
	Complex b(3, 4);
	Complex c(4.2, 3.7);
	Complex vid(0, 0);
	Complex neutru(1, 1);

	cout << "TEST new default elem" << endl;
	Complex nou;
	nou.show_compl();
	cout << endl;

	cout << "TEST show_compl" << endl;
	a.show_compl();
	c.show_compl();
	cout << endl;

	cout << "TEST show_exp" << endl;
	a.show_expo();
	c.show_expo();
	cout << endl;

	cout << "TEST add" << endl;
	a.add(c).show_compl();
	cout << endl;

	cout << "TEST mult" << endl;
	a.mult(c).show_compl();
	cout << endl;

	cout << "TEST quot" << endl;
	a.quot(c).show_compl();
	a.quot(b).show_compl();
	cout << endl;

	cout << "TEST abs" << endl;
	cout << a.abs() << endl;

	cout << "TEST compute_polar" << endl;
	a.compute_polar();

}