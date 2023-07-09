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
		ascii=65;
		while(j<=c)
		{
			cout<<(char)ascii<<" ";
			ascii++;
			j++;
		}
		cout<<endl;
		i++;
	}
	
	
	
	return 0;
}
