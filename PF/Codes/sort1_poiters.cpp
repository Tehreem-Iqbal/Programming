#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void sortAndPrint(int *x,int const SIZE){
int i,j,temp;
for(i=0;i<SIZE;i++){
		for(j=i+1;j<SIZE;j++){
		
		if(x[i]>x[j]){
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
		
		}
	}
	}
	for(i=0;i<SIZE;i++)
			cout<<x[i] <<" ";
			cout<<"\n";
			
}

void TakeInp(int *x,int const SIZE){
	int i;
for(i=0;i<SIZE;i++)
		cin>>x[i];
	}
	void PrintArr(int *x,int const SIZE){
		int i;
	for(i=0;i<SIZE;i++)
			cout<<x[i]<<" ";
			cout<<"\n";
}

int main(){
	srand(time(0));
	int i,j,temp,count=10;
	int *a;
	a= new int[count]; 
	TakeInp(a,count);
	PrintArr(a,count);
	sortAndPrint(a,count);
	delete []a;
			return 0;
}
