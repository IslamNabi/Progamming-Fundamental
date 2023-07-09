#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int i=1;
	string inp1,inp2;
	
	while(i<=n)
	{
		cin>>inp1;
		cin>>inp2;
	
	if(inp1==inp2)
	{
		cout<<"Similiar\n";
	}
	else
	cout<<"Not Similiar";
		
		
		i++;
	}
	return 0;
}
