#include<iostream>
using namespace std;

class myClass
{
	public:
		void func()
		{
			cout<<"Hello World!";
		}
};

int main ()
{
	// Class methods are functions defined inside a class
	//create an object of class 
	myClass islam;
	islam.func(); 
	
	
	return 0;
}
