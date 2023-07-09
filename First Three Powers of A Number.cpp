#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	cout<<"First Three Powers of Given Number are: "<<endl;
	for(int i=1; i<=3; i++)
	{
		int power;
		if(i==1)
		{
		power=n;
		cout<<power<<"  ";
		}
		else if(i==2)
		{
	
		power=n*n;
		cout<<power<<"  ";
		}
		else if(i==3)
		{
		power=n*n*n;
		cout<<power;	
		}	
	}
	
	
	return 0;
}
