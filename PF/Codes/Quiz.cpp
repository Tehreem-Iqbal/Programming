#include <iostream>
using namespace std;
class QuizResult{
	public:
int noOfStudents;//5-15, default is 10
int *marks;

void set(const int n){
	if(n>=5 && n<=15) noOfStudents=n;
    else  noOfStudents=10;
	marks= new int[noOfStudents];
}
int get() const{ 
        return noOfStudents;
    }

QuizResult(int n){
	set(n);
}

void read (){
	for(int i=0;i<noOfStudents;i++)
	cin>>marks[i];
}

QuizResult(const QuizResult &m){
		 noOfStudents= m.noOfStudents;
		marks = new int[noOfStudents];
		for (int i=0;i<noOfStudents;i++)		
			marks[i] = m.marks[i];
	}
void scale(const int value){
	for(int i=0;i<noOfStudents;i++)
		marks[i]=marks[i]+value;
}
void show(){
	for(int i=0;i<noOfStudents;i++)
	cout<<marks[i]<<' ';
	cout<<'\n';
}

};

int main(){
int n, value;
cin >> n;
QuizResult q1(n);

q1.read();  //input n values

q1.show();

QuizResult q2 = q1;

cin >> n >> value;

if (n==1)   q1.scale (value); //increase marks of all students for quiz 1

else        q2.scale (value); //increase marks of all students for quiz 2

q1.show();

q2.show();

return 0;


}
