#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
class Matrix{
	int m;
	int n;
	int **elements;
public:
	Matrix(){	}
	Matrix(int m,int n){
	set( m, n);	
	}
	~Matrix (){
		delete []elements;
	for(int i=0;i<m;i++)
       delete []elements[i];
   }
   void set(int m,int n){
		this-> m = m;
		this-> n = n;
		elements = new int *[m];
		for(int i=0;i<m;i++)
		elements[i]= new int [n];
	}
   
   	Matrix (const Matrix &matrix){
		m = matrix.m; 
		n = matrix.n;
		elements = new int* [m];
		for ( int i=0;i<m;i++)
		{
			elements [i] = new int [n];
			for (int j=0;j<n;j++)
				elements[i][j] = matrix.elements[i][j];
		}
	}
	
	void operator = (const Matrix &matrix){	
	
		for (int i=0;i<n;i++)
			delete []elements[i];
		delete []elements;		
		m = matrix.m; 
		n = matrix.n;
		elements = new int* [m];
		
		for ( int i=0;i<m;i++){
			elements [i] = new int [n];
			for (int j=0;j<n;j++)
				elements[i][j] = matrix.elements[i][j];
		}
	}
	
	 void values(){
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
                elements[i][j] = rand()%10;
    }
	
	Matrix operator + (const Matrix &matrix){	
		Matrix newMatrix(m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		newMatrix.elements[i][j]= elements[i][j] + matrix.elements[i][j];
	}
	return newMatrix;
}
		Matrix operator - (const Matrix &matrix){	
		Matrix newMatrix(m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		newMatrix.elements[i][j]= elements[i][j] - matrix.elements[i][j];
	}
	return newMatrix;
}
	
	  Matrix operator * (const Matrix &matrix){
	  	Matrix newMatrix;
	  	if(m = matrix.n) 
	  	newMatrix.m = m;
	  	newMatrix.n = matrix.n;
	  	
    	
    
  	}
  	
  		
	Matrix operator += (const Matrix &matrix){	
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		 elements[i][j] += matrix.elements[i][j];
	}
	return *this;
}

	Matrix operator -= (const Matrix &matrix){	
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		 elements[i][j] -= matrix.elements[i][j];
	}
	return *this;
}

	friend ostream& operator << (ostream &out,const Matrix &matrix);
};

ostream& operator << (ostream &out, const Matrix &matrix){
		for(int i=0;i<matrix.m;i++){
		for(int j=0;j<matrix.n;j++)
		cout<<matrix.elements[i][j]<<' ';
		cout<<'\n';
	}
		cout<<'\n';	
}

int main(){
	Matrix m1,m2, m3, m4;
	m1.set(5,5);
	m1.values();
	m2.set(5,5);
	m2.values();
	cout << m1;
	cout << m2;
	m3 = m1+m2;
	m4 = m1-m2;

}

		

