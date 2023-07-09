#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"Enter order of matrix: ";
	cin>>n;
	int arr1[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int arr2[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr2[i][j];
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<arr2[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
	cout<<"Sum of two above matrices is: ";
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<(arr1[i][j]+arr2[i][j])<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
