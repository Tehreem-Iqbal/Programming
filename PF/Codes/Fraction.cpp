#include<iostream>
using namespace std;
class Fraction
{
	int nominator;
	int denominator;
		int gcd(int a,int b)
	{
		if (a == 0)
			return b;
		return gcd(b % a, a);
	}
public:
	

	Fraction()
	{
		nominator = 0;
		denominator = 1;
	}
	void setNominator(int p)
	{
		nominator = p;
		check(*this);
	}
	
	void setdenominator(int q)
	{
		if (denominator != 0)
		denominator = q;
		check(*this);
	}
	int getnominator()const
	{
		return nominator;
		
	}
	int getdenominator()const
	{

		return denominator;
	}
	Fraction operator +(Fraction f)
	{
		Fraction n;
		
		n.denominator = denominator * f.denominator;
		n.nominator = nominator*f.denominator + f.nominator*denominator;
		check(n);
		return n;

	}
	Fraction operator - (Fraction f)
	{
		Fraction n;
		n.denominator = denominator * f.denominator;
		n.nominator = nominator * f.denominator - f.nominator * denominator;
		check(n);
		return n;


	}
	Fraction operator * (Fraction f)
	{
		Fraction n;
		n.nominator = nominator * f.nominator;
		n.denominator = denominator * f.denominator;
		check(n);
		return n;

	}
	
	
	Fraction operator / (Fraction f)
	{
		Fraction n;
		n.nominator = nominator * f.denominator;
		n.denominator = denominator * f.nominator;
		check(n);
		return n;

	}
	
		void check(Fraction &f)
	{
		// Finding gcd of both terms 
		int common_factor = gcd(f.nominator, f.denominator);

		// Converting both terms into simpler 
		// terms by dividing them by common factor 
		f.nominator = f.nominator / common_factor;
		f.denominator = f.denominator / common_factor;
	}
	
friend ostream& operator << ( ostream &out, const Fraction &f);
	
};
ostream& operator << ( ostream &out, const Fraction &f){
		cout << f.getnominator() <<  "/" << f.getdenominator()<< '\n';
		return out;
	}

