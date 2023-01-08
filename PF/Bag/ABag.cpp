#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Bag{

int *p,current_size,max_size;

void init(const int size){
max_size=size;
current_size=0;
p=new int[max_size];
}

void add( const int element){
p[current_size++]=element;
}

bool isExist(const int ELEMENT){
for(int i=0;i<current_size;i++)
if(p[i]==ELEMENT) return true;
 return false;
}

void print(){		
for (int i=0;i<current_size;i++)
cout << p[i] << ' ';
cout << '\n';
}

Bag merge(Bag &b){
	Bag newBag;
	max_size=current_size + b.current_size;
	newBag.init(max_size);
	for(int i=0;i<current_size;i++)
	newBag.p[newBag.current_size++]=p[i];
	for(int i=0;i<b.current_size;i++)
	newBag.p[newBag.current_size++]=b.p[i];
	
	return newBag;
}
int indexOf(const int ELEMENT){
	if(isExist(ELEMENT)){
	for (int i=0;i<current_size;i++)
	if(p[i]==ELEMENT) return i;
}
else return -1;
}

void newSize(const int newSize){
 	max_size=newSize;
 	p= new int[max_size];	
 }
 
 
bool has(const Bag &bag){
	int count=0;
	for (int i=0;i<bag.current_size;i++)
	if(isExist(bag.p[i]) ) count++;
		
	if(count==bag.current_size) return true;
	else return false;
	 
}
void free(){
	delete []p;
}


};
int main(){
		int i, value;
	srand(time(0));
	struct Bag b1,b2,b3,b4;
	int index;
	b1.init(6);
		for (i=0;i<6;i++ ){
		value = rand() % 10;
		(b1.add(value)) ;
	}
	cout<<"b1: ";
b1.print();
	
	b2.init(5);
	for (i=0;i<5;i++ ){
		value = rand() % 10;
		(b2.add(value)) ;
	}
		cout<<"b2: ";
b2.print();
	b4.init(5);

	for (i=0;i<5;i++ ){
		value = rand() % 10;
		(b4.add(value)) ;
	}
		cout<<"b4: ";
b4.print();

//merge arrays
	b3=b1.merge(b2);
	cout<<"MERGED ARRAY:";
	
	b3.print();
//showing index
	index=b3.indexOf(34);
	cout<<"Index of 34: "<<index<<'\n';
	index=b3.indexOf(2);
	cout<<"Index of 2: "<<index<<'\n';
	
//cheking one bag has other bag or not
	if(b3.has(b1)) cout<<"B3 has B1\n";
	else cout<<"B3 not has B1\n";
	if(b3.has(b4)) cout<<"B3 has B4\n";
    else cout<<"B3 not has B4\n";
    b1.free();
     b2.free();
      b3.free();
       b4.free();
	return 0;
}


