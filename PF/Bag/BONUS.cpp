#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#define USIZE 50
using namespace std;
struct Set{
int *data,size,current_size;
int uData[USIZE];
int uData1[USIZE];

void set(int SIZE){
current_size=0;
size=SIZE;
data = new int [size];
}

bool isExist(int ELEMENT){
for(int i=0;i<current_size;i++)
if(data[i]==ELEMENT) return true;
 return false;
}


bool add(int ELEMENT){
if(current_size==size)  return false;
if(isExist(ELEMENT))  return false; 
      data[current_size++]=ELEMENT;
return true;
}
//complement function
Set complement ( ){
	Set newSet;
for(int i=0;i<USIZE;i++){
	int sum=0;
uData[i]=rand()%50;
for(int j=(i-1);j>=0;j--)
if(uData[i]==uData[j]) sum++;
if(sum==0)		uData1[i]=uData[i];
else i--;
}
for(int i=0;i<USIZE;i++)
	cout<<uData1[i]<<' ';
	cout<<'\n';
	int count=0;
	
for(int i=0;i<USIZE;i++)
for(int j=0;j<size;j++)
if(uData1[i]==data[j])  count++;
cout<<count<<'\n';
size= USIZE-count;
cout<<size<<'\n';
newSet.set(size);
cout<<newSet.current_size<<'\n';
for(int i=0;i<USIZE;i++){
if(isExist(uData1[i]))  ;
else newSet.data[newSet.current_size++]=uData1[i];
}
return newSet;
}
//subset function
bool isSubset(const Set &set){
	if(set.current_size>current_size)  	return false;
	for(int i=0;i<set.current_size;i++)
	if(!isExist(set.data[i])) return false;
	return true;
}
//proper set function
bool isProperSubset(const Set &set){
	if(!isSubset(set))  return false;
			if(isSubset(set)){
				if(current_size==set.current_size)  return false;
				else return true;
		
			}  

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
 	int value;
 	srand(time(0));
 	struct Set s1,s2,s3,s5;
 	s2.set(5);
 		for(int i=0;i<5;){
 	     value=rand()%10;
 	     if(s2.add(value)) i++;
 	 }
 	s2.print();
 	
 	s1.set(7);
 	for(int i=0;i<7;){
 	     value=rand()%10;
 	     if(s1.add(value)) i++;
 	 }
 	s1.print();
 	
	//complement of a set
	s3=s1.complement();
	cout<<"COMPLEMENT: ";
	s3.print();
	//subset check
	if(s1.isSubset(s2))  cout<<"s2 is subset of s1\n";
	else cout<<"s2 is not subset of s1\n";
	//proper subset check
	if(s1.isProperSubset(s2))  cout<<"s2 is proper subset of s1\n";
	else cout<<"s2 is not a proper subset of s1\n";
	s1.free();
		s2.free();
			s3.free();
				s5.free();
	return 0;
 }






