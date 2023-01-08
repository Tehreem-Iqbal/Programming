
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(){
	srand(time(0));
	int x[10];
	int a, b, temp;
	for(int i=0;i <10;i++){
		x[i] = rand()%100;
		cout << x[i] << ' ';}
		cout << '\n';
	for(int i=0;i <100;i++){
		a = rand()%10;
		b = rand()%10;
		temp = x[a];
		x[a] = x[b];
		x[b] = temp;	
}
for(int i=0;i <10;i++){
		cout << x[i] << ' ';}
		cout << '\n';
return 0;
}
