

							// Returning Object of Class through C++ Function
#include<iostream>
using namespace std;

class MyClass{
	public:
		string first,last;
};

MyClass myname(){
	
	MyClass islam;
	// initialize variables of islam
	islam.first="Islam";
	islam.last= "Ul Nabi";
	// Print variables of Islam
	cout<<"First name: "<<islam.first<<endl;
	cout<<"Last name: "<<islam.last;
	
	return islam;
}

int main ()
{
	MyClass obj;
	obj = myname();
	
	return 0;
}
