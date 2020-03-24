/*#include <iostream>
#include <math.h>
#include <vector>
#include <cassert>

using namespace std;

//sorts an array of complex numbers by absolute value
void sorting(vector <Complex> v, int len)
{
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
		cout << ", ";
	}
	cout << endl;
}

//calulates the sum of an array of complex numbers
void sum(vector <Complex> v, int len)
{
	Complex sum;
	for (int i = 0; i < len; i++)
		sum = sum.add(v[i]);

	cout << "Sum is equal to: ";
	sum.show_compl();
	cout << endl;
}

void Tests()
{
	Complex a(1, 6);
	Complex b(3, 5);
	Complex c(4.2, 3.7);
	Complex vid(0, 0);
	Complex neutru(1, 1);
	Complex new;

	cout << "TEST show_compl" << endl;
	a.show_compl();
	c.show_compl();

	cout << "TEST show_exp" << endl;
	a.show_expo();
	c.show_expo();

	cout << "TEST add" << endl;
	new = vid.add(a);
	assert(new == a);

	cout << "TEST mult" << endl;
	new = a.mult(neutru);
	assert(new == a);
	new = b.mult(vid);
	assert(new == vid);

	cout << "TEST quot" << endl;
	new = a.quot(neutru);
	assert(new == a);
	new = b.mult(vid);

	cout << "TEST abs" << endl;
	assert(a.abs() == 5);

	cout << "TEST compute_polar" << endl;
	a.compute_polar();

	cout << "TEST sort" << endl;
	vector <Complex> v = { a, b, c, vid, neutru };
	sorting(v, 5);

	cout << "TEST sum" << endl;
	sum(v, 5);
}