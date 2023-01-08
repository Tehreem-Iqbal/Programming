#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
bool isExist(int, int*, int);

int main() {
    int *x1, *x2, count1, count2, cnt=0;
    cin.read((char*)&count1, sizeof(int));
    x1 = new int [count1];
    for(int i=0; i<count1; i++)
        cin.read((char*)&x1[i], sizeof(int));
    cin.read((char*)&count2, sizeof(int));
    x2 = new int [count2];
    for(int i=0; i<count2; i++)
        cin.read((char*)&x2[i], sizeof(int));
    for(int i=0;i<count2;i++){
            if(isExist(x2[i],x1,count1))
                cnt++;
    }
    cout.write((char*)&cnt,sizeof(int));
    int *values;
    values = new int[cnt];
    for(int i=0;i<count2;i++)
        if(isExist(x2[i], x1, count1))
            cout.write((char*)&x2[i],sizeof(int));
    return 0;
}
bool isExist(int val, int * x, int count){
    for(int i=0;i<count;i++)
        if(x[i]==val)
            return true;
    return false;
}
