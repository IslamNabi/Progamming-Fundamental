#include<iostream>
using namespace std;

void func(int num1, int num2)
{
	int sum;
	sum=num1;
	num1=num2;
	num2=sum;
	cout<<"Number 01: "<<num1<<endl;
	cout<<"Number 02: "<<num2;
}


int main ()
{
	int n1,n2;
	cout<<"Enter Number 01: ";
	cin>>n1;
	cout<<"Enter Number 02: ";
	cin>>n2;
	func(n1,n2);	
	return 0;
}
