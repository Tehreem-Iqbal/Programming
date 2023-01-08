#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Employee{
public:
string fName,sName;
int hour,hourRate;	
Employee(string fn, string sn){
fName=fn;
sName=sn;
}

Employee(string fn, string sn, int h, int hR){
	Employee(fn, sn);
	setHours(h);
	setHourRate(hR);
}

void setHours(int h){
	if (h<20) hour=20;
	else hour=h;
}

void setHourRate(int hR){
	if(hR<50) hourRate=50;
	else hourRate = hR;
}

void increaseHourRate(int inc){
	hourRate=hourRate+inc;

}

void show(){
	cout<<fName<<' '<<sName<<' '<<hour<<' '<<hourRate;
}

int calcSalary(){
	int salary=hour*hourRate;
	if(hour>40) salary=(salary*hour)/100;
	return salary;
}

};

int main(){
	string sN, fN;

int h, hR;

cin>>fN>>sN;

Employee emp1 (sN, fN);

cin>>fN>>sN;

cin.clear();

cin>>h>>hR;

Employee emp2 (sN, fN, h, hR);

emp1.show();

emp2.show();

cout << emp1.calcSalary() << ' ' << emp2.calcSalary() << '\n';

return 0;
	
	
}

