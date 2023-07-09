#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int ascii=64+n;
	for(int i=1; i<=n; i++)
	{
		ascii=64+n;
		for(int j=1; j<=n; j++)
		{
			cout<<(char)ascii<<" ";
			ascii--;
		}
		cout<<endl;
	}
	
	
	return 0;
}
