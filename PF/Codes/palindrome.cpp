#include <iostream>
using namespace std;
int main(){
	
    char arr[10];
    cin >> arr;
    int len = 0;
    for (int i=0; arr[i] != 0; i++)
        len++;
    int n= len;
    bool flag = true; 
      for (int i = 0; i <= n/2 ; i++) {  
        if (arr[i] != arr[n - i - 1]) { 
            flag = false; 
            break; } 
    } 
    if (flag == false) 
        cout << arr << " is not Palindrome"<<'\n'; 
    else
        cout << arr << " is Palindrome"<< '\n'; 
	return 0;
}




