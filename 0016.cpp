#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int islam=1;
	for(int i=n; i>=1; i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<islam<<" ";
		}
		cout<<endl;
		islam++;
	}
	
	
	return 0;
}
