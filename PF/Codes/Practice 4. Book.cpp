#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Book{
protected:
	char title[20];
	char author[20];
public:
	Book(const char *title ,const char *author){
		set(title,author);
	}
	void set(const char *title,const char *author){
		strcpy(this->title,title);
		strcpy(this->author,author);
	}
	void show(){
		cout << "Title: " << title <<"\n"<< "Author: " << author << "\n";
	}
};
class Fiction:public Book{
	int numericGradingLevel;
public:
	void set(int nGL){
	numericGradingLevel = nGL;
	}
	Fiction(char *title, char *author, int nGL): Book(title, author){
	set(nGL);		
	}
	void show(){ Book :: show() ; 
		cout << "Numeric Reading Level: " <<numericGradingLevel <<'\n';
	}
};
	
class NonFiction:public Book{
	int numberOfPages;
public:
	void set(int nOP){
	numberOfPages = nOP;
	}
	NonFiction(char *title, char *author, int nOP): Book(title, author){
	set(nOP);		
	}
	void show(){ Book :: show() ; 
		cout << "Nunmber of pages: " << numberOfPages<< '\n';
	}
};

int main(){
	Fiction f("Shahab Nama", "Qudrat ullah Sahab", 20);
	f.show();
	NonFiction nf("Shahab Nama", "Qudrat ullah Sahab", 150);
	nf.show();
	return 0;
}
