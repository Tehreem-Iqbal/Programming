#include <iostream>
using namespace std;

class Matrix{
	int rows,cols;
	int **data;
public:
	void set(int ROWS,int COLS){
		rows=ROWS;
		cols=COLS;
		data = new int *[rows];
		for(int i=0;i<rows;i++)
		data[i]= new int [cols];
	}
	
	void readElements(){
		cout<<"entre elements: ";
		for(int i=0;i<rows;i++)
		for(int j=0;j<cols;j++)
		cin>>data[i][j];
		
	}	
	
	Matrix mul_row(int Row_no, int ELEMENT ){
		Matrix newMatrix;
		newMatrix.set(rows,cols);
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
		if(i==Row_no)
		newMatrix.data[i][j]=data[i][j]*ELEMENT;
		else
		newMatrix.data[i][j]=data[i][j];
	}
	return newMatrix;
	}
	Matrix mul_col(int Col_no, int ELEMENT ){
		Matrix newMatrix;
		newMatrix.set(rows,cols);
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
		if(j==Col_no)
		newMatrix.data[i][j]=data[i][j]*ELEMENT;
		else
		newMatrix.data[i][j]=data[i][j];
	}
	return newMatrix;
	}
	Matrix add_row(int Row_1, int Row_2 ){
		Matrix newMatrix;
		newMatrix.set(rows,cols);
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
		if(i==Row_2)
		newMatrix.data[i][j]=data[i][j]+data[Row_1][j];
		else
		newMatrix.data[i][j]=data[i][j];
	}
	return newMatrix;
	}
	
	Matrix add_col(int Col_1, int Col_2 ){
		Matrix newMatrix;
		newMatrix.set(rows,cols);
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
		if(j==Col_2)
		newMatrix.data[i][j]=data[i][j]+data[i][Col_1];
		else
		newMatrix.data[i][j]=data[i][j];
	}
	return newMatrix;
	}
	
		Matrix sub_row(int Row_1, int Row_2 ){
		Matrix newMatrix;
		newMatrix.set(rows,cols);
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
		if(i==Row_2)
		newMatrix.data[i][j]=data[i][j]-data[Row_1][j];
		else
		newMatrix.data[i][j]=data[i][j];
	}
	return newMatrix;
	}
	
	Matrix sub_col(int Col_1, int Col_2 ){
		Matrix newMatrix;
		newMatrix.set(rows,cols);
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
		if(j==Col_2)
		newMatrix.data[i][j]=data[i][j]-data[i][Col_1];
		else
		newMatrix.data[i][j]=data[i][j];
	}
	return newMatrix;
}

void show(){
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
		cout<<data[i][j]<<' ';
		cout<<'\n';
	}
		cout<<'\n';	
}
	
void free(){
	delete []data;
	for(int i=0;i<rows;i++)
       delete []data[i];
}
};

int main() {
	class Matrix m1,m2;
    int r,c,no_of_operations,x,j,k,scalar;
    cout<<"Entre rows: ";
    cin>>r;
    cout<<"Entre columns: ";
    cin>>c;
    m1.set(r,c);
    m1.readElements();		
    
    
    cout<<"entre No of operations: ";
     cin>>no_of_operations;
     
     for(int i=0;i<no_of_operations;i++){
     cout<<"x= ";
     cin>>x;
     switch(x){
    case 1:
    	cout<<"j= ";
        cin>>j;
    	cout<<"scalar ";
        cin>>scalar;
		 m1=m1.mul_row(j,scalar);
		
     	break;	
    case 2:
    	cout<<"k= ";
        cin>>k;
         cout<<"scalar ";
        cin>>scalar;
     	m1=	m1.mul_col(k,scalar);
     	break;
    case 3:
    	
     	cout<<"j= ";
     	cin>>j;
     	cout<<"k= ";
     	cin>>k;
     	m1=m1.add_row(j,k);
     	break;
    case 4:
    
     	cout<<"j= ";
     	cin>>j;
    	 cout<<"k= ";
    	 cin>>k;
     m1=m1.add_col(j,k);
     	break;
    case 5:
    	
     	cout<<"j= ";
     	cin>>j;
     	cout<<"k= ";
     	cin>>k;
     m1=m1.sub_row(j,k);
        break;
    case 6:
    
     	cout<<"j= ";
     	cin>>j;
     	cout<<"k= ";
     	cin>>k;
     m1=m1.sub_col(j,k);
     	break;
    
    case 7:
     	m1.show();
     	break;
	 }
    
}
    
    
    return 0;
}

