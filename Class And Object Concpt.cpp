#include<iostream>
using namespace std;

class islam
{
	//access specifier
	public:
	//data members
	string name;
	//member function
	void func()
	{
		cin>>name;
	}
	void func2()
	{
		cout<<"Name is: "<<name;
	}
};


int main ()
{
	islam obj1;
	obj1.name="Islam Ul Nabi";
	obj1.func();
	obj1.func2();
	
	
	return 0;
}
