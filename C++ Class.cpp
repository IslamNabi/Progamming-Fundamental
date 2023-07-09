	
	/*
									(OOP Concept)
	C++ Class:--
		
		A class in c++ is a blueprint of the object.
			we can think class as a sketch of a house. or class is template or a class is 
			is a user defined datatype...
			FOR EXAMPLE:---
			class myClass {
				attributes ( variables )
				
				methods		( functions )
			};
			
			
	*/


#include<iostream>
using namespace std;

class Room {
	public:
		double length;
		double height;
		double width;
	public:
		double calculateArea(){
			
			return length*width;
		}
		
		double calculateVolume(){
			return length*width*height;
		}	

};

int main ()
{
	Room room1;
	room1.length=2;
	room1.height=3;
	room1.width=2;
	double area1;
	area1=room1.calculateArea();
	cout<<"Area of Room 1 is: "<<area1<<endl;
	double volume1;
	volume1 = room1.calculateVolume();
	cout<<"Volume of Room 1 is: "<<volume1<<endl;;
	
	Room room2;
	room2.height=3;
	room2.length=4;
	room2.width=5;
	double area2;
	area2=room2.calculateArea();
	cout<<"Area of Room 2 is: "<<area2<<endl;
	double volume2;
	volume2 = room2.calculateVolume();
	cout<<"Volume of Room 2 is: "<<volume2<<endl;;
	
	return 0;
}
