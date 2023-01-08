#include <iostream>
#include <ctime>
#include <cstdlib>

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
	
Player (int playerNo, int matches) : player_no(playerNo){
	this->no0fMatches=matches;
	this->score= new int[no0fMatches];
	this->status= new char[no0fMatches];
}
void read()const{
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
   // cout<<"Number of Players: "<<number_of_players<<'\n';
    cout<<"Player "<<player_no<<" played "<<no0fMatches<<" and "<<number_of_innings()<<" innings "<<'\n';
    cout<<"Score: ";
	 for(int i=0;i<no0fMatches;i++)
	 cout << score[i]<<' ';
	 cout<<'\n';
}
void showAverage(){
	cout<<"Number of Players: "<<calAverage()<<'\n';
}
	 static int  getNoOfPlayer() {
		return number_of_players;
	}	
};

int Player::number_of_players=3;

 int main(){
 	Player *p1,*p2,*p3;
 	int n,o,n1,n2,n3,j; 	
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
	if(j==1)	p1->showAverage();
	if(j==2)	p2->showAverage();
	if(j==3)	p3->showAverage();

	break;
	    case 2:
	cin>>j;
	if(j==1)	p1->show();
	if(j==2)	p2->show();
	if(j==3)	p3->show();
	break;
		case 3:
cout<<"Total Players: "<<Player::getNoOfPlayer();
break;
		case 4:	
			cin>>j;
	if(j==1)	p1->show();
	if(j==2)	p2->showAverage();
	if(j==3)	p3->showAverage();

	break;
			
		case 5:
	cin>>j;
	if(j==1)	delete p1;
	if(j==2)	delete p2;
	if(j==3)	delete p3;
	break;
		case 6:
	cin>>j;
	if(j==1)	p1 = new Player(1,n1);
	if(j==2)	p2 = new Player(2,n2);
	if(j==3)	p3 = new Player(3,n3);	
	break;
		case 7:
			cin>>j;
	if(j==1)
	p1->read();
	if(j==2)
	p2->read();
	if(j==3)
	p3->read();
		break;					
	}

 }
 
 return 0;
}
