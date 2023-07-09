#include<iostream>
using namespace std;
int main ()
{
	int n,av=0,sum=0;
	cout<<"Enter number of integers: ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		sum=sum+arr[i];	
	}
	av = sum/n;
	cout<<"Average of numbers is: "<<av;
	
	
	
	return 0;
}
