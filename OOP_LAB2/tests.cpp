#include <iostream>
#include <cassert>
#include "complex.h"
#include "tests.h"
#include "functii_main.h"

using namespace std;

void Tests()
{
	Complex a(2, 7);
	Complex b(3, 4);
	Complex c(4.2, 3.7);
	Complex vid(0, 0);
	Complex neutru(1, 1);

	assert(a.get_imag() == 7);
	assert(a.get_real() == 2);

	Complex test(1.0948, 0.702202);
	assert(vid.add(a) == a);
	assert(b.mult(vid) == vid);
	assert(b.abs() == 5);	
}