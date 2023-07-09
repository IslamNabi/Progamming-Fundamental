#include<iostream>
using namespace std;
class Car
{
	public:
	string brand;
	string model;
	int year;	
	
};

int main ()
{
	// create an object of car
	Car obj1;
	obj1.brand="BMW";
	obj1.model="X5";
	obj1.year=1999;
	
	// create another object of Car
	Car obj2;
	obj2.brand="Toyota";
	obj2.model="Mustang";
	obj2.year=2000;
	
	//print attribute values
	
	cout<<obj1.brand<<"  "<<obj1.model<<"  "<<obj1.year<<endl;
	cout<<obj2.brand<<"  "<<obj2.model<<"  "<<obj2.year;
	
	
	return 0;
}
