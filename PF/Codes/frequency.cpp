#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void sortAndPrint(int x[],int const SIZE){
int i,j,count;
for(i=0;i<SIZE;i++){
	count = 1;
		for(j=i+1;j<SIZE;j++){
		if(x[i]==x[j])
		count ++;
		}
	cout<< x[i] << "," << count <<" times "<<" ";
			cout<<"\n";
	}

			
			
}

void TakeInp(int x[],int const SIZE){
	int i;
for(i=0;i<SIZE;i++)
		x[i] = rand()%10;
	}
	void PrintArr(int x[],int const SIZE){
		int i;
	for(i=0;i<SIZE;i++)
			cout<<x[i]<<" ";
			cout<<"\n";
}

int main(){
	int i,j,temp,count=10;
	int a[count];
	TakeInp(a,count);
	PrintArr(a,count);
	sortAndPrint(a,count);
			return 0;
}
