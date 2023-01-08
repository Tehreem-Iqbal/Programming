#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void sortAndPrint(int x[],int const SIZE){
int i,j,temp, min;
for(int i=0;i<9;i++){
		min=i;
		for(int j=i+1;j<10;j++)
			if(x[j]<x[min])
				min=j;
				temp=x[i];
				x[i]=x[min];
				x[min]=temp;

	}
	
	cout << "Sorted Array: " << '\n';
	for(i=0;i<SIZE;i++)
			cout<<x[i] <<" ";
			cout<<"\n";
			
}
	int main(){
		srand(time(0));
		int arr[10], final_arr[10];
		for(int i=0;i<10;i++)
		 arr[i] = rand()%10;
	 	sortAndPrint(arr,10);
	 	int min = 0, max = 9;
	 	//bool indicator = true;
		for( int i=0 ;i < 10; i++){
			if(i%2 == 0)
			final_arr[i] = arr[max--];
			else 
			final_arr[i] = arr[min++];
			}

	//	for( int i=1 ;i < 10; i=i+2){
	//		final_arr[i] = arr[min++];}
	 	
		for(int i=0;i<10;i++)
			cout<<final_arr[i] <<" ";
			cout<<"\n";
}
