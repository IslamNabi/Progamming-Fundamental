#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"Enter number of integers: ";
	cin>>n;
	int islam[n];
	for(int i=0; i<n; i++)
	{
		cin>>islam[i];
	}
	int max = islam[0];
	for(int i=0; i<n; i++)
	{
		if(islam[i]>max)
		max=islam[i];
	}
	cout<<"Maximum Number in Array is: "<<max;
	return 0;
}
