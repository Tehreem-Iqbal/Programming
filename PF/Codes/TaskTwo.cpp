#include <iostream>
#include <string>

using namespace std;

template <class Type>
Type sum(Type x, Type y){
	Type s;
	s = x + y;
	return s;
}


template <class T1,class T2>
T2 sub(T1 x, T2 y){
	T2 s;
	s = x - y;
	return s;
}

int main(){
	int x=8, y=10;
	float z = 3.3;
	cout << "Sum: ";
	cout << sum(x,y)<< '\n';
	cout << "Difference:";
	cout << sub(y,z)<< '\n';
	
	return 0;
}

