#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  char x = 'a';
  char y = 'A';
 int num ;
 
    cin >> num;
    for(int i=0;i < num ;i++){
    	y = 'A' + i;
        cout << y;
    }
    cout << '\n';
    for(int i=0;i < num ;i++){
    	x = 'a' + i;
        cout << x;
    }
    
    return 0;
}

