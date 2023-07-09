#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"Enter number of terms for fibonaccy series: ";
	cin>>n;
	int temp;
	int ft=0,st=1;
	int tt=ft+st;
	for(int i=0; i<n; i++)
	{
		cout<<ft<<" "<<st<<" ";
		tt=ft+st;
		temp=st;
		st=tt;
		tt=temp;
		ft=0;
		st=1;
		cout<<tt<<" ";
	}
	
	return 0;
}
