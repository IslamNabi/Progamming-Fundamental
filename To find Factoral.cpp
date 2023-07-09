#include<iostream>
using namespace std;
int main ()
{
	int n;
	int fac=1;
	cin>>n;
	if(n==0 || n==1)
	cout<<"Factorial of 1 or 0 is 1"<<endl;
	else
	{
		for(int i=1; i<=n; i++)
		{
			fac=fac*i;
		}
		cout<<fac;
	}
	
	
	return 0;
}
