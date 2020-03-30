#include <iostream>
#include <cassert>
#include "Rational_number.h"
#include "Test.h"
#include "Main_f.h"
using namespace std;

void testAdd()
{
	Rational_number nr1(10, 5);   //10   20
	Rational_number nr2(20, 4);	  //5    4

	assert(nr1.get_den() == 5);
	assert(nr1.get_num() == 10);

	assert(nr2.get_den() == 4); //test getter;
	assert(nr2.get_num() == 20);

	Rational_number nr6 = nr1 + nr2; //test for operator +;
	assert(nr6.get_den() == 20);
	assert(nr6.get_num() == 140);

}

void testMulti()
{
	Rational_number nr1(10, 5);   //10   20
	Rational_number nr2(20, 4);	  //5    4

	assert(nr1.get_den() == 5);
	assert(nr1.get_num() == 10);

	assert(nr2.get_den() == 4); //test getter;
	assert(nr2.get_num() == 20);

	Rational_number nr3 = nr1 * nr2;
	assert(nr3.get_den() == 20); //test for operator *;
	assert(nr3.get_num() == 200);
}

void testDivi()
{
	Rational_number nr1(10, 5);   //10   20
	Rational_number nr2(20, 4);	  //5    4

	assert(nr1.get_den() == 5);
	assert(nr1.get_num() == 10);

	assert(nr2.get_den() == 4); //test getter;
	assert(nr2.get_num() == 20);

	Rational_number nr5 = nr1 / nr2;
	//cout << nr5.getter_den();
	assert(nr5.get_num() == 40); //test for operator /;
	assert(nr5.get_den() == 100);
}

void testDecre()
{
	Rational_number nr1(10, 5);   //10   20
	Rational_number nr2(20, 4);	  //5    4
	
	assert(nr1.get_den() == 5);
	assert(nr1.get_num() == 10);

	assert(nr2.get_den() == 4); //test getter;
	assert(nr2.get_num() == 20);

	Rational_number nr4 = nr1 - nr2;
	assert(nr4.get_den() == 20); //test for operator -;
	assert(nr4.get_num() == -60);
}

void testGCD()
{
	Rational_number nr1(10, 5);   //10   20
	Rational_number nr2(20, 4);	  //5    4

	assert(nr1.gcd(nr1) == 5); //test for gr. common div.;
	assert(nr2.gcd(nr2) == 4);
	//cout << nr1.gcd(nr1);
}