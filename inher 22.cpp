#include<iostream>
using namespace std;

	/*	INHERITANCE 
	Ans:- Inheritance in c++ means to inherit attributes and methods from one class to another class.
			there are two types of classes in inheritance
			1: derived class (the class that inherits)
			2: base class (the class that is beig inherited)
			--- to inherit from a class use ":" symbol
	*/

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main ()
{
	
	Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
	
	
	return 0;
}
