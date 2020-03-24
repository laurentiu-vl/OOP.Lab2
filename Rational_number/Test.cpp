#include <iostream>
#include <cassert>
#include "Rational_number.h"
#include "Test.h"

void test()
{
	Rational_number nr1(10, 5);
	Rational_number nr2(20, 4);

	assert(nr1.getter_den()== 5);
	assert(nr1.getter_num() == 10);

	assert(nr2.getter_den() == 4);
	assert(nr2.getter_num() == 20);




}