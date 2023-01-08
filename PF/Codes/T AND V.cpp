#include <iostream>

using namespace std;
class T{
public:
	T(){cout<< "T object is created\n";}
	~T(){cout<< "T object is destroyed\n";}
};

class V{
	T t1;
public:	
	V(){cout<< "V object is created\n";}
	~V(){cout<< "V object is destroyed\n";}
};

int main(){
	V objv;
}
