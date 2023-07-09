#include<iostream>
using namespace std;

void boneApetite(int arr[], int k, int b,int n)			
{
												/*
														4 1
														3 10 2 9
														12
														output
														5
															
													*/
	
	int antotal=0;
	for(int i=0; i<n; i++)
	{
		if(i!=k)
		antotal=antotal+arr[i];
		else
			continue;
	}
	antotal=antotal/2;
	if(antotal==b)
	cout<<"Bone Appetit";
	else
	cout<<b-antotal;
	
}
int main ()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int b;
	cin>>b;
	boneApetite(arr,k,b,n);
	
	
	return 0;
}
