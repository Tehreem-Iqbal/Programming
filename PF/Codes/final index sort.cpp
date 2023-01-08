#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;
struct Seq{
int **data, rows,cols;
 
void set(int row_size,int col_size){
rows=row_size; cols= col_size;
data = new int*[rows];
for(int i=0;i<rows;i++)
data[i]= new int[cols];
}
void init(){
for(int i=0;i<rows;i++)
for(int j=0;j<cols;j++)
data[i][j]=rand()%100;
}

Seq con(){
	Seq conArr;
	conArr.set(rows,cols);
	
for(int i=0;i<rows;i++)
for(int j=0;j<cols;j++)
conArr.data[i][j]=data[i][j];
return conArr;
}

void print(){
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++)
cout<<data[i][j]<<' ';
cout<<'\n';
}
cout<<'\n';
}

Seq sort(){
Seq newData;
int temp;
newData.set(rows,cols);
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
for(int l=0;l<rows;l++){
for(int k=0;k<cols;k++){	
if(data[i][j]<data[l][k]){
temp=data[i][j];
data[i][j]=data[l][k];
data[l][k]=temp;
}}
}
}
}
for(int l=0;l<rows;l++){
for(int k=0;k<cols;k++)
newData.data[l][k]=data[l][k];
}
cout<<'\n';
return newData;
}

void indexSort(Seq &s){

for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
for(int l=0;l<rows;l++){
for(int k=0;k<cols;k++){
if(s.data[i][j]==data[l][k])
 	cout<<l+1<<","<<k+1<<'\n';
}
}
}
}

}
};



int main() {
	srand(time(0));
    Seq s1,s2,s3,s4;
s1.set(3,3);
s1.init();
s1.print();
s2=s1.con();
s3=s1.sort();
s3.print();
s2.indexSort(s3);
   
    return 0;
}
