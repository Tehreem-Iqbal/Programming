#include <iostream>
#include <iomanip>
#include <string.h>
 
using namespace std;

class Player{
char player_name[20];
int player_no;
int noOfMatches;
int highestOfAllMatches;
int noOfH;
int noOfF;
public:
Players(const char* player_name,int player_no,int noOfMatches,int highestOfAllMatches ,int noOfH,int noOfF){
set( player_name,player_no, noOfMatches, highestOfAllMatches , noOfH,noOfF);
}
void set(const char* player_name,int player_no,int noOfMatches,int highestOfAllMatches ,int noOfH,int noOfF){
	strcpy(this->player_name,player_name);
this->player_no=player_no;
this->noOfMatches=noOfMatches;
this->highest=highest;
this->noOfH=noOfH;
this->noOfF=noOfF;
}
friend ostream&operator<<(ostream& out,const Players&p);
};
 ostream&operator<<(ostream& out,const Players&p){
out << setw(20) << left << p.player_name setw(5)<<player_no << setw(5) << p.noOfMatches << setw(10) << p.highestOfAllMatches << setw(5) << right <<c.noOfH << setw(4) << c.noOfF << '\n';
return out;
}

class Team{
	int totalScore;
	int wickets;
	Player *p;
public:
	void readPlayers(const char* player_name, int player_no, int noOfMatches,int highestOfAllMatches,int noOfH,int noOfF){
		p = new Player[11];
		p[player_no].set(player_name,player_no,noOfMatches, highestOfAllMatches, noOfH, noOfF);
	}
	
	
	int heighestScorer(Player &p){
		int high=0;
		for(int i=0;i<11;i++){
			if(p[i].highestOfAllMatches>high)	 high = i;
		}
	return high;
	}
	
	}
};


