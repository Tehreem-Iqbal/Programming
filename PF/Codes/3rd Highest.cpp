#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int i,j,N,n, heighest,count;
    cin >> N;
    int x[N];
    for(i=0;i < N; i++)
        cin>>x[i];
    cin >> n;
    for(i = 1;i< N;i++){
        if(heighest < x[i])
            heighest = x[i];
    }
    cout << heighest<< '\n';
	 for(i=0;i<SIZE;i++){
        count = 0;
        for(j=0;j<SIZE;j++) 
        if(x[i]<x[j])
            count++;
              
      }
            if(count==n){
            	if (n==1) cout << n << "st heighest element"; 
            	if (n==2) cout << n << "nd heighest element"; 
            	if (n==3) cout << n << "rd heighest element"; 
            	else cout << n <<"th heighest element";
			}
            
    }
		
    return 0;
}

