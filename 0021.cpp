#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int islam = n;
	
	for(int i=n; i>=1; i--)
	{
		islam=n;
		for(int j=1; j<=i; j++)
		{
			cout<<islam<<" ";
			islam--;
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
