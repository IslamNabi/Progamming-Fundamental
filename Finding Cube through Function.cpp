#include<iostream>
using namespace std;

int func(int a)
{
	int cube=0;
	cube=a*a*a;
	return cube;
}


int main ()
{
	int a;
	cin>>a;
	int result;
	result = func(a);
	cout<<"Cube of this number is: "<<result;
	
	return 0;
}
