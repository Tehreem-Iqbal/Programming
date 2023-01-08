#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Bag{

int *p,current_size,max_size;

void set(int size){
max_size=size;
current_size=0;
p=new int[max_size];
}

void add(int element){
p[current_size++]=element;
}

Bag remove(int const element){
	
Bag RemArr;

max_size=current_size;

RemArr.set(max_size);

for(int i=0;i<current_size;i++){
	
if(p[i]==element)  ;

else RemArr.p[RemArr.current_size++]=p[i];
}
return RemArr;
}

Bag addElem(int element, int index){
	
Bag FinArr;
max_size=current_size+1;
FinArr.set(max_size);
for(int i=0;i<current_size;i++){
if(FinArr.current_size!=index)
 FinArr.p[FinArr.current_size++]=p[i];


if(FinArr.current_size==index) {
	
FinArr.p[FinArr.current_size++]=element;

}

}
return FinArr;
}

void show(){
		
for (int i=0;i<current_size;i++)
cout << p[i] << ' ';
cout << '\n';
}

void free(){
delete []p;
for(int i=0;i<current_size;i++)
	dele;
	}
};

int main() {
struct Bag b1,b2,b3;
b1.set(5);
b1.add(1);
b1.add(6);
b1.add(9);
b1.add(3);
b1.add(2);
b1.show();

b2=b1.remove(6);

b2.show();
b3=b2.addElem(4,2);
b3.show();
b1.free();
b2.free();
b3.free();
   
    return 0;
}

