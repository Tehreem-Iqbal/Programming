#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(){
	int i,j,temp,count=0;
	int x[5]= {2 ,4 ,1,3,2};
	for(i=0;i<5;i++){
		count=0;
		x[i] = temp;
		for(j=i+1;j<5;j++){
		if(temp == x[j]) break;
		else count++;
	}
	cout << count << '\n';}
	
	return 0;
}
