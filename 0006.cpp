#include<iostream>
using namespace std;
int main ()
{
	int r,c;
	cin>>r>>c;
	int i=1,j=1;
	int islam=r;
	
	while(i<=r)
	{
		j=1;
		while(j<=c)
		{
			cout<<islam<<" ";
			j++;
		}
		cout<<endl;
		islam--;
		i++;
	}
	
	
	return 0;
}
