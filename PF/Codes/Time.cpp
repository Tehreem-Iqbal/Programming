
#include <iostream>
using namespace std;
 
  
class Time{
     public:
         int hours,minutes,seconds;
         char T;
         
         void set1(const char A,const int h, const int m, const int s){
         if(h>=1 && h<=12)    hours=h;
         else hours=1;
         if(m>=0 && m<=59)    minutes=m;
         if(s>=0 && s<=59)    seconds=s;
             T=A;
         }
        void set2(char A,const int h, const int m){
        if(h>=1 && h<=12)    hours=h;
        else hours=1;
        if(m>=0 && m<=59)    minutes=m;
        
         T=A;
         seconds=0;    
         }
         void set3(char A, const int h){
             if(h>=1 && h<=12)    hours=h;
         else hours=1;
             T=A;
             minutes=0;
             seconds=0;
         }
         void set4(char A){    
             T=A;
             minutes=0;
             seconds=0;
             hours=0;
         }
         Time(const char A, const int h, const int m, const int s){
             set1(A,h,m,s);
         }
         Time(const char A,const int h, const int m){
             set2(A,h,m);
         }
         Time(const char A,const int h){
             set3(A,h);
         }
         Time(const char A){
             set4(A);
         }
        
         void show(){
             if(T=='A')
             cout<<hours<<":"<<minutes<<":"<<seconds<<" "<<"AM"<<'\n';
             if(T=='P')
             cout<<hours<<":"<<minutes<<":"<<seconds<<" "<<"PM"<<'\n';
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
            hours++;
        minutes=minutes - 60;
        }
        if(minutes>59) goto q;
    }
             
 };
 
 int main(){
     int n,h,m,s;
     char t;
     
for(int i=0;i<4;i++){

    cin>>n;
if(n==4){
         cin>>t>>h>>m>>s;
         Time t1(t,h,m,s);
        t1.addsec();
        t1.addmins();
         t1.show();
     }
 if(n==3){            
             cin>>t>>h>>m;
           Time t2(t,h,m);
      t2.addsec();
       t2.addmins();
           t2.show();
}
if(n==2){
             cin>>t>>h;
           Time t3(t,h);
     t3.addsec();
t3.addmins();
           t3.show();
       }
      if(n==1){
             cin>>t;
           Time t4(t);
           t4.addsec();
        t4.addmins();
           t4.show();
       }
        
}

     return 0;
 }
     
     
