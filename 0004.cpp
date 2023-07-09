#include<iostream>
using namespace std;
int main ()
{
	int r,c;
	cin>>r>>c;
	int i=1,j=1;
	int ascii=65;
	
	while(i<=r)
	{
		j=1;
		while(j<=c)
		{
			cout<<(char)ascii<<" ";
			j++;
		}
		cout<<endl;
		ascii++;
		i++;
	}
	
	
	return 0;
}
