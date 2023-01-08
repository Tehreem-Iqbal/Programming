#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool unique(int x[]){
	int i, j, count;
    for(i = 1; i< 10; i++){
		count = 1;
        for(j= i-1; j>=0; j--){
            if(x[i] == x[j]) {
            	count++;
        }
    }
    return count ;
 }
}
int main() {
    int i,j, count, u=0;
    int x[10];
	int sum=0;
    for(i = 0; i< 10; i++)
        cin >> x[i];

 for(i = 0; i< 10; i++){
 	count =1;
 	 for(j= i-1; j>=0; j--){
 	 	if(x[i] == x[j]) 
            count++;
        }
    if(count == 1){
    	u++;
    	 sum = sum + x[i];}
}
	
    cout << sum / u;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
