#pragma once
class Rational_number
{
		private: 
				int denominator;
			
				int numerator;

		public:
				Rational_number();
				
				Rational_number(int, int);
				
				int getter_num();
				
				int getter_den();

				void setter_num(int);

				void setter_den(int);

				void print();

				Rational_number add(Rational_number);

				void multi(int, int);

				friend Rational_number operator + (Rational_number const&  numar1, Rational_number const&  numar2);

				friend Rational_number operator * (Rational_number const& numar1, Rational_number const& numar2);

				friend Rational_number operator / (Rational_number const& numar1, Rational_number const& numar2);

				friend Rational_number operator - (Rational_number const& numar, Rational_number const& numar2);






};

