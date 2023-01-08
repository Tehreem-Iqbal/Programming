#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Player{
    const int player_no;
    int no0fMatches;
    int *score;
    char *status;
    static int number_of_players;
    
    int number_of_innings(){
        int count=0;
    for(int i=0;i<no0fMatches;i++)
    if(status[i]=='O')
    count++;
    return count;
    }
public:
    
Player (int playerNo, int no0fMatches) : player_no(playerNo){
    this->no0fMatches=no0fMatches;
    this->score= new int[no0fMatches];
    this->status= new char[no0fMatches];
    number_of_players++;
}
void read(){
int i;
for(i=0;i<no0fMatches;i++){
cin>>score[i];
cin>>status[i];
}
}

int calAverage(){
    int sum=0;
    int average;
    for(int i=0;i<no0fMatches;i++)
    sum=sum+score[i];
    average = sum/number_of_innings();
    return average;
}

 void show(){
   
    cout<<"Player "<<player_no<<" played "<<no0fMatches<<"matches and "<<number_of_innings()<<" innings "<<'\n';
    
}
void showAverage(){
    cout<<"Average: "<<calAverage()<<'\n';
}
void showScore(){
    cout<<"Score: ";
     for(int i=0;i<no0fMatches;i++)
     cout <<score[i]<<' ';
     cout<<'\n';
}
    ~Player(){
       number_of_players--;
    }
     static int  getNoOfPlayer() {
        return number_of_players;
    }    
};

int Player::number_of_players=0;

 int main(){
     Player *p1,*p2,*p3;
     int n,o,n1,n2,n3,j;
     int k,l,m,p,q;
    cin>>n1>>n2>>n3;
     p1 = new Player(1,n1);
    p2 = new Player(2,n2);
    p3 = new Player(3,n3);
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>o;
    switch(o){
        case 1:
            cin>>j;
    if(j==1)    p1->showAverage();
    if(j==2)    p2->showAverage();
    if(j==3)    p3->showAverage();

    break;
        case 2:
    cin>>k;
    if(k==1)    p1->showScore();
    if(k==2)    p2->showScore();
    if(k==3)    p3->showScore();
    break;
        case 3:
cout<<"Number of players: "<<Player::getNoOfPlayer()<<'\n';
break;
        case 4:    
            cin>>l;
    if(l==1)    p1->showAverage();
    if(l==2)    p2->showAverage();
    if(l==3)    p3->showAverage();

    break;
            
        case 5:
    cin>>m;
    if(m==1)    delete p1;
    if(m==2)    delete p2;
    if(m==3)    delete p3;
    break;
        case 6:
    cin>>p;
    if(p==1)    p1 = new Player(1,n1);
    if(p==2)    p2 = new Player(2,n2);
    if(p==3)    p3 = new Player(3,n3);    
    break;
        case 7:
            cin>>q;
    if(q==1)     p1->read();
    if(q==2)     p2->read();
    if(q==3)     p3->read();
        break;                    
    }

 }
 
 return 0;
}
