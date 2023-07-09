#include<iostream>
using namespace std;
int main (){
	int n1,n2,rem;
	cin>>n1;
	n2=n1;
	int sum=0;
	while(n1!=0)
	{
		rem=n1%10;
		sum=sum+(rem*rem*rem);
		n1=n1/10;
	}
	if(sum==n2)
	cout<<"Number is ArmStrong:";
	else
	cout<<"Number is not ArmStrong: ";		
	
	
	
	
	return 0;
}
