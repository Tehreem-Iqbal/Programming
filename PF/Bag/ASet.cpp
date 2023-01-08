#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;
struct Set{
int *data,size,current_size;
void set(const int SIZE){
current_size=0;
size=SIZE;
data = new int [size];
}

bool isExist( int ELEMENT){
for(int i=0;i<current_size;i++)
if(data[i]==ELEMENT) return true;
 return false;
}


bool add(const int ELEMENT){
if(current_size==size)  return false;
if(isExist(ELEMENT))  return false; 
      data[current_size++]=ELEMENT;
return true;
}



Set intersection(Set &set){
Set intSet;
size=current_size;
if(current_size<set.current_size)	 size=current_size;
intSet.set(size);

for (int i=0 ; i < set.current_size ; i++)
	if ( set.isExist ( data[i] ) )
	intSet.data[ intSet.current_size++ ] =data[i];
		return intSet;
}


Set uni_on(const Set &set){
		Set uniSet;
		int size = current_size + set.current_size;
		uniSet.set(size);
		for ( int i=0 ; i < current_size ; i++)
			uniSet.data [ uniSet.current_size++ ] = data[i];
		
		for (int i=0 ; i < set.current_size ; i++)
			uniSet.add (set.data[i]);
		return uniSet;
	
}

Set difference( Set &set){
Set newSet;
int count=0;
for(int i=0;i<current_size;i++){
if(isExist(data[i]))  count++;
}
size= set.current_size-count;
newSet.set(size);
for(int i=0;i<set.current_size;i++){
if(set.isExist(data[i]))	;
else	newSet.data[newSet.current_size++]=data[i];
 
}
return newSet;
}

 void newSize(int newSize){
 	size=newSize;
 	data= new int[newSize];
 	
 }

void print(){
if (current_size == 0 )
cout << "Empty Set";
for (int i=0;i<current_size;i++)
cout<<data[i]<<' ';
cout<<'\n';
}

void free(){
delete []data;
	}

};

 int main(){
 	srand(time(0));
 	int value;
 	struct Set s1,s2,s3,s4,s5;
 s1.set(5);
 		for(int i=0;i<5;){
 	     value=rand()%10;
 	     if(s1.add(value)) i++;
 	 }
 	s1.print();
 
s2.set(5);
 		for(int i=0;i<5;){
 	     value=rand()%10;
 	     if(s2.add(value)) i++;
 	 }
 	s2.print();
 	
 	
 	s3=s1.intersection(s2);
 	cout<<"INTERSECTOIN:";
	s3.print();
	s4=s1.uni_on(s2);
	cout<<"UNION:";
	s4.print();
 	s5=s1.difference(s2);
 	cout<<"DIFFRENCE:";
	s5.print();
	s1.free();
		s2.free();
			s3.free();
				s4.free();
					s5.free();
	return 0;
 }





