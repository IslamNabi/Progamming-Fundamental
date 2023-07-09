#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;						//121
	int temp=n;
	int reverse=0;
	
	while(temp>0)
	{
		reverse=reverse*10;
		reverse=reverse+temp%10;
		temp=temp/10;
	}
	if(n==reverse)
	{
		cout<<"Number is Palindrom";
	}
	else
	cout<<"Number is not Palindrom";
	
	return 0;
}
