#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
class Student{
    int score[5];
public:
void input(){
	
    for(int i=0;i<5;i++)
        this->score[i] = rand()%100;
}
   int calculateTotalScore(){
       int totalScore=0;
       for(int i=0;i<5;i++)
       	totalScore= totalScore+score[i];
       	return totalScore;
	   
   }
   void show(){
	
    for(int i=0;i<5;i++)
        this->score[i] ;
}
};


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }
    for(int i = 0; i < n; i++){
        s[i].show();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << "total:"<<'\n';
    cout << count;
    
    return 0;
}

