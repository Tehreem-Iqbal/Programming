#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class PersonData{
protected:
string Fname;
string Lname;
string eMail;
string city;
int houseNo;
char block;
public:
void set(string Fname,string Lname,string eMail, string city, int houseNo, char block ){
	this->Fname = Fname;
	this->Lname = Lname;
	this->eMail = eMail;
	this->city = city;
	this->houseNo = houseNo;
	this->block = block;
}		
	PersonData(char *Fname,char *Lname,char *eMail, char *city, int houseNo, char block){
		set(Fname, Lname, eMail, city, houseNo, block);
	}	
string getFname()const{
	return Fname;
}
string getLname()const{
	return Lname;
}
string getEmail()const{
	return eMail;
}
string getcity()const{
	return city;
}
int getHno()const{
	return houseNo;
}
char getBlock()const{
	return block;
}
friend ostream& operator << (ostream &out,  const PersonData  &p);
};

ostream& operator << (ostream &out, const PersonData &p){
	out <<"Name: " <<p.getFname() <<' ' << p.getLname() <<"\n";
	out << "EMAIL: "<< p.getEmail()<< "\n";
	out << "City: " << p.getcity()<< "\n";
	out << "House No: " << p.getHno()<<'-' <<"Block: "<< p.getBlock() <<"\n";
}
class CustomerData:public PersonData{
	int customerNo;
	bool  Email;
public:

void set(int customerNo, bool Email){
	this->customerNo = customerNo;
	this->Email;
	}	
CustomerData(char *Fname,char *Lname,char *eMail, char *city, int houseNo, char block ,int customerNo, bool Email) : PersonData(Fname, Lname, eMail, city, houseNo, block){
	set(customerNo, Email);
}	
	
int getCnumber()const{
	return customerNo;
}
bool getEmail()const{
	return Email;
}
void MialingList(bool  Email){
	this -> Email = Email;
}
friend ostream& operator << (ostream &out, const  CustomerData &c);
};
ostream& operator << (ostream &out, const  CustomerData &c){
	out << (PersonData)c << "Customer No: "<< c.getCnumber() << '\n' << c.getEmail() <<'\n';
}

int main(){
/*	string fname, lname, email, city;
//	char block;
//	int houseNo, cNo;
//	bool Email;
//	cout <<"Entre First name: ";
//	cin >> fname;
//	cout <<"Entre Last name: ";
//	cin >> lname;
//	cout <<"Entre Email: ";
//	cin >> email;
//	cout <<"Entre city name: ";
//	cin >> city;
//	cout <<" House No: ";
//	cin>> houseNo;
//	cout <<" Enter Block: ";
//	cin>> block;
	cout <<" House No: ";
	cin>> houseNo;
	cout <<" Customer No: ";
	cin>> cNo;
	cin >> Email;*/
	
	CustomerData c("Fariha" , "Kausar" , "bcsf19m533" ,"Lahore", 73, 'J', 05, true);
	cout << c;
}
