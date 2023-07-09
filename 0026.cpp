#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int space=n;
	space = space - 1;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=space; j++)
		{
			cout<<" ";
		}
		for(int l=1; l<=i; l++)
		{
			cout<<l;
		}
		cout<<endl;
		space--;
	}
	
	
	return 0;
}
