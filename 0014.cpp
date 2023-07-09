#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int ascii=65;
	
	for(int i=1; i<=n; i++)
	{
		ascii=65;
		for(int j=1; j<=n; j++)
		{
			if(j<=i)
			cout<<(char)ascii<<" ";
			else
			cout<<" ";
			ascii++;
		}
		cout<<endl;
	}
	
	return 0;
}
