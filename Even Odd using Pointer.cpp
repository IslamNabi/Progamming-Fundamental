#include<iostream>
using namespace std;
int main ()
{
	int num1,num2;
	cout<<"Enter Number 01: ";
	cin>>num1;
	cout<<"Enter Number 02: ";
	cin>>num2;

	int *temp;
		temp=&num1;
		num1=num2;
		num2=*temp;
	
	cout<<"Number 01: "<<num1<<endl;
	cout<<"Number 02: "<<num2;
	
	
	return 0;
}
