#include<iostream>
using namespace std;
//	Base Class 
class Vehicle{
	public:
		string brand = "Ford";
		void honk(){
			cout<<"Tuut, tuut! \n";
		}	
};

//	Derived Class 
class Car: public Vehicle{
	public:
		string model = "Mustang";
};


int main ()
{

	Car myCar;
	myCar.honk();
	
	return 0;
}
