#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int ascii=64+n;
	
	for(int i=n; i>=1; i--)
	{
		ascii=64+n;
		for(int j=1; j<=i; j++)
		{
			cout<<(char)ascii<<" ";
			ascii--;
		}
		cout<<endl;
	
	}
	
	
	return 0;
}
