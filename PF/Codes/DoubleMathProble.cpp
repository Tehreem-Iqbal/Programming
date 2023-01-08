#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mathProblem.cpp"
using namespace std;

class DoublingMathProblem : public mathProblem
{
public:
Fraction setProblem(Fraction &f){
	operater  = '+';
	corAns = f + f;
}

};
int main(){
	srand(time(0));
	DoublingMathProblem m;
	Fraction f;
	f.setNominator(2);
	f.setdenominator(10);
	m.setProblem(f);
	cout << f;
	m.displayProb();
	return 0;
}






