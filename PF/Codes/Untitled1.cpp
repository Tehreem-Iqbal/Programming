#include <iostream>
using namespace std;
  
  
  class Time{
  	int hours, minutes, seconds;
  	char T;
  	
	void set4(char t, int h, int m, int s)  {
		T=t;
  		if(h>=1 && h<=12)  hours=h; 
  		if(m>=0 && m<=59)	minutes=m;
  		if(s>=0 && s<=59)  seconds=s;
	}
	void set3(char t, int h, int m)  {
		T=t;
  		hours=h; 
  		minutes=m;
  		seconds=s;
	}
	void set2(char t, int h)  {
		T=t;
  		hours=h; 
  		minutes=m;
  		seconds=s;
	}
	void set1(char t)  {
		T=t;
  		hours=h; 
  		minutes=m;
  		seconds=s;
	}

	    Time(char t, int h, int m, int s){
  		T=t;
  		hours=h; 
  		minutes=m;
  		seconds=s;
	  }
	  void addsec(){
        p:
		if(seconds>59){  
            minutes++;
        seconds=seconds - 60;
        }
        if(seconds>59) goto p;
    }
    void addmins(){
    	
    	q:
		if(minutes>59) { 
		 minutes=minutes - 60;
            hours++;
        }
        if(minutes>59) goto q;
    }
  	
  	
  };
