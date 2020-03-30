#include <iostream>
#include "complex.h"
#include "tests.h"
#include "functii_main.h"
using namespace std;

int main()
{
	//Executing tests for print
	Tests_to_show();

	//Executing tests
	Tests();

	//Print sort nr.
	Sort_function();

	//Print summe of nr.
	Summe();
}