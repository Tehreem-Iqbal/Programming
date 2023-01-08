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
		x[i] = rand()%10;
		cout << x[i] << ' ';}
		cout << '\n';
	for(int i=0;i <10;i++)
	sum = sum + x[i];
	avg = sum / 10;
	cout << avg << '\n';
	for(int i=0;i <10;i++){
		diff = avg - x[i];
		if(diff < 0) diff = -(diff);
		cout << diff <<' ';
		
	}
	
	return 0;
}
