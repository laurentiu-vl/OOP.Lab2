#include <iostream>
#include "complex.h"
#include "tests.h"
using namespace std;

int main()
{
	//Executing tests
	Tests();

	Complex v[5]{ {1, 6}, {3, 5}, {4.2, 3.7}, {0, 0} };
	int len = 4;

	//Sorting an array of complex numbers by absolute value
	cout << "TEST sort" << endl;
	Complex aux;
	for (int i = 0; i < len ; i++)
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

	// Calulating sum of an array of complex numbers
	cout << "TEST sum" << endl;
	Complex sum;
	for (int i = 0; i < len; i++)
		sum = sum.add(v[i]);

	cout << "Sum is equal to: ";
	sum.show_compl();
	cout << endl;
}