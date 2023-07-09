#include<iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int i=1,j=0;
	if(n==1)
	{
		cout<<"Neither Prime Nor Composite";
	}
	else
	{
	while(i<=n)
	{
		if(n%i==0)
		{
			j=j+1;
			i++;
		}
		else if(n%i!=0)
		{
			i++;
		}
	}
	if(j==2)
	cout<<"Number is Prime";
	else
	cout<<"Number is Composite7";
	}
	return 0;}
