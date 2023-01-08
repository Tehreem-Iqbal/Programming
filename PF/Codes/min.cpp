#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main(){
	srand(time(0));
	int sum =0, diff;
	int avg;
	int x[10];
	for(int i=0;i <10;i++){
		x[i] = rand()%100;
		cout << x[i] << ' ';}
		cout << '\n';
	int min = x[0];
	for(int i=1;i <10;i++){
		if(min > x[i])  min = x[i];
	}
	cout << "minimum number: "<< min << '\n';
		for(int i=0;i <10;i++){
		diff = x[i] - min;
		cout << diff << ' ';
	}
	return 0;}
