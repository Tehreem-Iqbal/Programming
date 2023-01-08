#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
   int row,col1,col2,i,j,k;
   int count;
    
    cin>>row;
    cin>>col1;
    cin>>col2;
    int arr1[row][col1];
    int arr2[row][col2];
    for(i=0;i<row;i++){
    	for(j=0;j<col1;j++){
    		//arr1[i][j]=rand()%100;
    		cin>>arr1[i][j];
    		
		}
			cout<<"\n";
	}
	for(i=0;i<row;i++){
    	for(j=0;j<col2;j++){
    		//arr1[i][j]=rand()%100;
    		cin>>arr2[i][j];
    		
		}
			cout<<"\n";
	}
    
    for(i=0;i<row;i++){
    	for(j=0;j<col1;j++){
    		//arr1[i][j]=rand()%100;
    		
    		cout<<arr1[i][j]<<' ';
		}
			cout<<"\n";
	}

	 for(i=0;i<row;i++){
    	for(j=0;j<col2;j++){
    		//arr2[i][j]=rand()%100;
    		cout<<arr2[i][j]<<' ';
		}
			cout<<"\n";
	}
	
    for(i=0;i<row;i++){
    	count=0;
    	for(j=0;j<col1;j++){
    		for(k=0;k<col2;k++){
    			if(arr1[i][j]==arr2[i][k])
    			count++;
    			
			}
			
		}
	
			cout<<count<<"\n";
	}
    
    return 0;
}

