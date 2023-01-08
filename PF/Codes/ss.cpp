#include <iostream>
#include <iomanip>
#include <string.h>
#include "Player.cpp"
using namespace std;
class Team{
	int totalScore;
	int wickets;
	Player *p;
public:
	void readPlayers(const char* player_name, int player_no, int noOfMatches,int highestOfAllMatches,int noOfH,int noOfF){
		p = new Player[11]; // strong aggregaion
		p[player_no].set(player_name,player_no,noOfMatches, highestOfAllMatches, noOfH, noOfF);
	}
	
	int heighestScorer(){
		int high=0;
		for(int i=0;i<11;i++){
			if(p[i].highestOfAllMatches>high)	 high = i;
		}
	return high;
	}
	
	int most100s(){
			int mhund=0;
		for(int i=0;i<11;i++){
			if(p[i].noOfH>mHund)	 mHund = i;
		}
	return mHund;
	}
	int mostFif = 0;
	for(int i=0;i<11;i++){
			for(int j=i;j<11;j++)
			if(p[j].noOfH == p[i].noOfH) 
			      if(p[i].noOfF > p[j].noOfF)    mostFif = j;
			  }
			return mostFif;
		}
};
