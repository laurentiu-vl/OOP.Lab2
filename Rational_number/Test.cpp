#include <iostream>
#include <cassert>
#include "Rational_number.h"
#include "Test.h"
using namespace std;

void test()
{
	Rational_number nr1(10, 5);   //10   20
	Rational_number nr2(20, 4);	  //5    4

	assert(nr1.getter_den()== 5);
	assert(nr1.getter_num() == 10);

	assert(nr2.getter_den() == 4); //test getter;
	assert(nr2.getter_num() == 20);

	Rational_number nr3(nr1 * nr2);
	assert(nr3.getter_den() == 20); //test for operator *;
	assert(nr3.getter_num() == 200);

	Rational_number nr4(nr1 - nr2);
	assert(nr4.getter_den() == 20); //test for operator -;
	assert(nr4.getter_num() == -60);

	Rational_number nr5(nr1 / nr2); 
	//cout << nr5.getter_den();
	assert(nr5.getter_num() == 40); //test for operator /;
	assert(nr5.getter_den() == 100);

	Rational_number nr6(nr1 + nr2); //test for operator +;
	assert(nr6.getter_den() == 20);
	assert(nr6.getter_num() == 140);

	assert(nr1.gcd(nr1) == 5); //test for gr. common div.;
	assert(nr2.gcd(nr2) == 4);
	//cout << nr1.gcd(nr1);

	//(nr1.simply(nr1)).print();
	Rational_number nr7(2, 1);
	(nr1.simply(nr1));
	//assert((nr1.simply(nr1)).print()== 5);
}





