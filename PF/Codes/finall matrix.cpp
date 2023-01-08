#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Matrix{
    int **data,row,col;
    void set( int rows, int cols){
    	row=rows;
    	col=cols;
        data = new int*[row];
        for(int i=1;i<=row;i++)
            data[i]=new int[col];
    }    
            
      void read(){
        int i,j;
        for (i=1;i<=row;i++)
            for (j=1;j<=col;j++)
                data[i][j] = rand()%10;
    }

        void print(){
        int i,j;
        for (i=1;i<=row;i++){
            for (j=1;j<=col;j++)
                cout << data[i][j] << ' ';
            cout << '\n';
        }
        cout << '\n';
    }
       
       Matrix mul(int row1, int element,int col1, int col2){
    	Matrix Matrixnew;
    	int temp;
    	Matrixnew.set(row,col);
    	for(int i=1;i<=row;i++){
    	for(int j=1;j<=col;j++){
		if(i==row1){
 Matrixnew.data[i][j]= element*data[i][j];
}
		else  Matrixnew.data[i][j]= data[i][j];
}
}
for(int i=1;i<=row;i++){
temp=Matrixnew.data[i][col1];
Matrixnew.data[i][col1]=Matrixnew.data[i][col2];
Matrixnew.data[i][col2]=temp;
}
    	return Matrixnew;
  	}

 

    void free(){
        delete []data;
             for(int i=1;i<=row;i++)
                 delete []data[i];
             }
    
};

int main() {
	srand(time(0));
    struct Matrix m1,m2;
    m1.set(5,5);
    m1.read();
    m1.print();
    m2= m1.mul(3,2,3,5);
    m2.print();
    m1.free();
    m2.free();
    return 0;
}

