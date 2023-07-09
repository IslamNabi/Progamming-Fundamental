#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"Enter Value of a: ";
	cin>>a;
	cout<<"Enter Value of b: ";
	cin>>b;//a=10,b=20
	int sum=0;
	sum = a+b;
	b=sum-b;
	a=sum-b;
	cout<<"Value of a: "<<a<<endl<<"Value of b:"<<b;
	
	
	
	return 0;
}
