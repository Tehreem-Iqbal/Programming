#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

class Employee{
protected:
	string fname;
	string sname;
	int salary;
public:
	Employee(string fname , string sname, int sal){
		this-> fname = fname;
		this-> sname = sname;
		salary = sal;
	}
	virtual int calSal(){
		return salary;
	}	
	string getFname(){
		return fname;
	}
	string getSname(){
		return sname;
	}
	friend ostream& operator << (ostream& out, const Employee &e);
};
ostream& operator << (ostream& out,  Employee &e){
		out <<"Name: " << e.getFname() <<' ' << e.getSname()<<'	';
	 	out <<"Salary: "  << e.calSal() <<'\n';
}
class RegEmp : public Employee{
	int addHours;
public:
	RegEmp(string fname , string sname, int salary, int addHours) : Employee(fname, sname, salary){
		this->addHours = addHours;
	}
	int calSal(){
		salary = salary + (100*addHours);
		return salary;
	}
	friend ostream& operator << (ostream& out, const RegEmp  &e);
};
ostream& operator << (ostream& out, RegEmp  &e){
		out <<setw(5) << left <<"Name: " << e.getFname() << setw(7) <<' ' << e.getSname()<<'	'<<"Salary: "  << e.calSal() <<'\n';
}
	 

class ConEmp : public Employee{
	int hRate;
	int hours;
public:
	ConEmp(string fname , string sname, int salary, int hRate, int hours) : Employee(fname, sname, salary){
		this->hRate = hRate;
		this->hours = hours;
	}
	int calSal(){
		salary = salary + (hours*hRate);
		return salary;
	}	
	friend ostream& operator << (ostream& out, const ConEmp &e);
};
ostream& operator << (ostream& out,  ConEmp &e){
		out <<"Name: " << e.getFname() <<' ' << e.getSname()<<'	';
	 	out <<"Salary: "  << e.calSal() <<'\n';
}

class DWageEmp : public Employee{
	int hRate;
	int hours;
public:
	DWageEmp(string fname , string sname, int salary, int hRate, int hours) : Employee(fname, sname, salary){
		this->hRate = hRate;
		this->hours = hours;
	}
	int calSal(){
		salary = hRate * hours;
		return salary;
	}
	friend ostream& operator << (ostream& out, const DWageEmp &e);
};
ostream& operator << (ostream& out,  DWageEmp &e){
		out <<"Name: " << e.getFname() <<' ' << e.getSname()<<'	';
	 	out <<"Salary: "  << e.calSal() <<'\n';
}

int main(){
	srand(time(0));
	Employee *e ;
	int choice;
	for (int i=0;i<10;i++){
		choice = rand() % 10;
	switch(choice){
case 1:
	e = new RegEmp  ("Kashif", "Muaz", 50000 , 10); 
	e->calSal();
	break;
case 2:
	e = new DWageEmp("Asad", "Sajid", 50000 , 200 ,20); 
	e->calSal();
	break;
case 3:
	e = new ConEmp  ("Usman", "Afzal", 50000 , 200 ,20);
		e->calSal();
		 break;
case 4:
	e = new RegEmp  ("Umais", "Irshad", 50000 , 10);
		e->calSal();
		 break;
case 5:
	e = new Employee("Sajid", "Iqbal", 50000 ); 
		e->calSal();
		break;
case 6:
	e = new RegEmp  ("Afzal", "Hanif", 50000 , 5);
		e->calSal();
		 break;
case 7:
	e = new DWageEmp("Asghar", "Majeed",50000 , 200 ,20);
		e->calSal();
		 break;
case 8:
	e = new ConEmp  ("Bashir", "Ali", 50000 , 200 ,20);
		e->calSal();
	 break;
case 9:
	e = new ConEmp  ("Sajid", "Iqbal", 50000 , 200 ,20);
		e->calSal();
		 break;
case 10:
	
	e = new DWageEmp("Anas", "Khan", 50000 , 200 ,20);
		e->calSal();
		 break;	
} 
cout << *e;
}
	return 0;
}
