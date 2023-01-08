#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Room{
	float length;
	float width;
	float height;
public:
	void set(float length,float width,float height){
		this->length = length;
		this->width = width;
		this->height = height;
	}
	
float getL()const{
return length;
}
float getW()const{
return width;
}	
float getH()const{
return height;
}		

float cal_Area()const{
	float area;
	area = length*width;
	return area;
}	
float cal_volume()const{
	float volume;
	volume = length*width*height;
	return volume;
}


	friend ostream& operator << (ostream &out, const Room &r);
};
ostream& operator << (ostream &out, const Room &r){
		cout <<"Length:\t"<<r.length <<'\n';
		cout <<"Width:\t"<<r.getW() <<'\n';
		cout <<"Length:\t"<<r.getH() <<'\n';
		cout <<"Area:\t"<< r.cal_Area() <<'\n';
		cout <<"Volume:\t"<<r.cal_volume()<<'\n';
	return out;
}


class House{
	int total_Rooms;
	Room *r; // ten rooms in the house
public:
	House(int total_Rooms){
		this->total_Rooms = total_Rooms;
		r = new Room[total_Rooms];
	}
	void set( int roomNo,float length,float width,float height){
		r[roomNo].set(length, width,height);
	}
	friend ostream& operator << (ostream &out, const House &h);
};

ostream& operator << (ostream &out, const House &h){
	
	for (int i=0;i<h.total_Rooms;i++){
	cout << "Room No\t" << i+1 << '\n'; 
		cout << h.r[i];
	}
	cout << '\n';
	return out;
}
int main(){
	House h(3);
	h.set(0, 55.5 ,22.7, 47.4);
	h.set(1,  67.4, 33.3, 86.3);
	h.set(2, 33.6,77.5,57.4);
	cout << h;
	
}

