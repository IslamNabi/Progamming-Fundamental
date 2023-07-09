#include<iostream>
using namespace std;
int main ()
{
	int n,i;
	cin>>n;
	int arr[10];
	
	for(i=0; n>0; i++)
	{
		arr[i]=n%2;
		n=n/2;
	}
	for(i=i-1; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;   
}

