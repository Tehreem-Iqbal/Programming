#include <iostream>

using namespace std;

class Rope{
	int feet;
	int inches;
	void normalize(){
		if (inches>=12){
			feet++;
			inches%=12;
		}
	}	
	
public:
	Rope(int feet=1, int inches=0){
		if (feet==0 && inches==0)
			feet = 1;
		this->feet = feet;
		this->inches = inches;
	}
	
	int getFeet() const{
		return feet;
	}
	int getInches() const{
		return inches;
	}
	Rope operator+(const Rope &r){
		Rope newRope;
			newRope.feet = feet + r.feet;
			newRope.inches = inches + r.inches;
				newRope.normalize();	
			return newRope;
}
	Rope operator++(int){
		Rope newRope = *this;
			inches++;
				normalize();
					return newRope;
	}
		bool compare(const Rope &r){
		if(feet < r.feet)
			return false;
			if(feet==r.feet){
				if(inches>r.inches) return true;
			}
	}	
	 bool operator ==(const Rope &r){
		if(feet != r.feet)
			return false;
			if(feet==r.feet){
				if(inches==r.inches) return true;
			}
	}
	bool operator =(const Rope &r){
		if(compare(r)) return true;
		if(*this==r )return true;
		
	else false;
}

	Rope& operator+=(const Rope &r){
		feet +=r.feet;
		inches += r.inches;
		normalize();	
	return *this;
	}

	Rope& operator++(){
		inches++;
		normalize();
		return *this;
	}
	

	Rope& operator--(){
		inches--;
		normalize();
		return *this;
	}
	
	Rope operator--(int){
		Rope newRope = *this;
		inches--;
		normalize();
		return newRope;
	}
	friend void operator * (Rope &r, int k);

};

ostream& operator << (ostream &out, Rope &r){
	out << "Rope is " << r.getFeet() << " feet ";
	if (r.getInches() > 0)
		out << r.getInches() << " inches ";
	out << "long\n";
	return out;
}	



int main(){
	Rope r1(2,6);
	Rope r2(3,8);
		cout<<r1;
		cout<<r2;
	Rope r3=r1+r2;
    	cout<<r3;
    Rope r5=r1++;
    	cout<<r5;
   		cout<<++r1;
     Rope r6=r1--;
   	 	cout<<r6;
    cout<<--r1;
    	r1+=r2;
    cout<<r1;
    if(r1.compare(r2)) cout<<"TRUE"<<'\n';
    else cout<<"FALSE"<<'\n';
     if(r1=r2) cout<<"TRUE"<<'\n';
    else cout<<"FALSE"<<'\n';
     if(r1==r2) cout<<"TRUE"<<'\n';
    else cout<<"FALSE"<<'\n';
    
    
	return 0;
}

