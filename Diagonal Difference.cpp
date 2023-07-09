#include<iostream>
using namespace std;
int fun(int n, int arr[][500])
{
	int count=0;
	int d1=0,d2=0;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==j)
			d1=d1+arr[i][j];
		}
											/*	1 2 3	(0,0)		(0,1)		(0,2)
												1 2 3	(1,0)		(1,1)		(1,2)
												1 2 3	(2,0)		(2,1)		(2,2)*/	
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			
			if((i+j)==n-1)
			d2=d2+arr[i][j];
		}
		
	}
	count = d1-d2;
	if(count<0)
	count=count*(-1);
	return count;
}

int main ()
{
	int n;
	cin>>n;
	
	int arr[n][500];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}
	int res=0;
	res = fun(n,arr);
	cout<<res;
	
	return 0;
}
