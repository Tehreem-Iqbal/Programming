#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Fraction.cpp"
using namespace std;

class mathProblem
{
public:
	Fraction fOperand;
	Fraction sOperand;
	Fraction userAns;
	Fraction corAns;
	bool isCorr;
	char operater;
public:
void setF(int x,int y){
	fOperand.setNominator(x) ;
	fOperand.setdenominator(y) ;
}
void setS(int x,int y){
	sOperand.setNominator(x) ;
	sOperand.setdenominator(y) ;
}
void setProblem(){
	setF(rand()% 10, rand()% 10) ;
	setS(rand()% 10, rand()% 10) ;
	operater = "+-*/"[rand() % 3];
	switch (operater){
	case '+':	
	corAns = fOperand + sOperand;
//	cout << corAns ;
		break;
	case '-':
	corAns = fOperand - sOperand;
//	cout<<corAns ;

		break;
	case '*':
	corAns = fOperand * sOperand;
//	cout<< corAns ;
		break;
	case '/':	
	corAns = fOperand / sOperand;
//	cout<<corAns ;
	break;
	}	
	userAns.setNominator(0) ;
	userAns.setNominator(0) ;
	isCorr = false;
}
void displayProb(){
	cout << fOperand.getnominator() << "/"<< fOperand.getdenominator() << " "<< operater << " " ;
	cout << sOperand.getnominator() << "/" << sOperand.getdenominator() << " = " <<'\n';
	}
	
bool askUserForAnswer(int x, int y) {
	userAns.setNominator(x);
	userAns.setdenominator(y);
if((userAns.getnominator() == corAns.getnominator()) && (userAns.getdenominator() == corAns.getdenominator())) return true;
else  return false;
}
};

int main(){
	srand(time(0));
	int x, y;

	mathProblem m[10];
	for(int i=0;i < 10;i++){
	m[i].setProblem();
	m[i].displayProb();
	cout << "Nominator: ";cin >> x ;
	cout << "Denomnator: ";cin >> y;
	if(m[i].askUserForAnswer(x, y)){	
	cout << "Your Answer: "<< m[i].userAns<<'\n';	
	cout << "Correct Answer: "<< m[i].corAns<<'\n';	
	cout << "Right Answer" << '\n';
	}
	else if(!(m[i].askUserForAnswer(x, y))) {
	cout << "Your Answer: "<< m[i].userAns<<'\n';	
	cout << "Correct Answer: "<< m[i].corAns<<'\n';	
	cout << "Wrong Answer" << '\n';	
	}
}
	return 0;
}
