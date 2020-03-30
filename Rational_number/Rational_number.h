#pragma once
class Rational_number
{
		private: 
				int denominator;
			
				int numerator;

		public:
				Rational_number(); //constructor
				
				Rational_number(int, int); //constructor with values
				
				int get_num();  //return numitor
				
				int get_den();  //return denominator

				//void setter_num(int);

				//void setter_den(int);

				void print(); //print number

				//void multi(int, int);

				friend Rational_number operator + (Rational_number const& numar1, Rational_number const& numar2);

				friend Rational_number operator * (Rational_number const& numar1, Rational_number const& numar2);

				friend Rational_number operator / (Rational_number const& numar1, Rational_number const& numar2);

				friend Rational_number operator - (Rational_number const& numar1, Rational_number const& numar2);

				int gcd(Rational_number numar1);

			    Rational_number simply(Rational_number numar);








};

