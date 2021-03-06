#include <iostream>
#include "functii_main.h"
#include "tests.h"
#include "complex.h"
using namespace std;

void Tests_to_show() //Print 
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
	cout << a.abs();
	cout << endl;

	cout << "TEST compute_polar" << endl;
	a.compute_polar();
	cout << endl;
}

	 void Sort_function() //Sort an array of nr.
	 {
		Complex v[5]{ {1, 6}, {3, 5}, {4.2, 3.7}, {0, 0} };
		int len = 4;

		cout << "TEST sort" << endl;

		Complex aux;
		for (int i = 0; i < len; i++)
			for (int j = i; j < len; j++)
			{
				double first = v[i].abs();
				double second = v[j].abs();
				if (first > second)
				{
					aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}
			}

		for (int i = 0; i < len; i++)
		{
			v[i].show_compl();
		}
		cout << endl;
	 }


	 void Summe() //Calulating sum of an array of complex numbers
	 {
		 Complex v[5]{ {1, 6}, {3, 5}, {4.2, 3.7}, {0, 0} };
		 int len = 4;

		 cout << "TEST sum" << endl;

		 Complex sum;

		 for (int i = 0; i < len; i++)
			sum = sum.add(v[i]);

		 cout << "Sum is equal to: ";
		 sum.show_compl();
		 cout << endl;

	 }