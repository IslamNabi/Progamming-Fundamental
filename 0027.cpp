#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int space=0;

	for(int i=n; i>=1; i--)
	{
		for(int j=1; j<=space; j++)
		{
			cout<<" ";	
		}	
		for(int l=1; l<=i; l++)
		{
			cout<<'*';
		}
		cout<<endl;
		space++;
	}	
	
	return 0;
}
