#include<iostream>
using namespace std;
int main ()
{
	int r,c;
	cin>>r>>c;
	int i=1,j=1;
	while(i<=r)
	{
		j=1;
		while(j<=c)
		{
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
	
	return 0;
}
