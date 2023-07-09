#include<iostream>
using namespace std;
int* func(int a[], int b[])
{
	int arr[2];
	int alice=0,bob=0;
	int fir=0,sec=1,t=2;
	
		if(a[fir]>b[fir])
		alice++;
		else if(b[fir]>a[fir])
		bob++;
		else
		alice;
		bob;
		
		if(a[sec]>b[sec])
		alice++;
		else if (b[sec]>a[sec])
		bob++;
		else
		alice;
		bob;
		
		if(a[t]>b[t])
		alice++;
		else if(b[t]>a[t])
		bob++;
		else
		bob;
		alice;

	arr[0]=alice;
	arr[1]=bob;	
	return arr;
}


int main ()
{
	int a[3];
	for(int i=0; i<3; i++)
	{
		cin>>a[i];	
	}	
	int b[3];
	for(int i=0; i<3; i++)
	{
		cin>>b[i];	
	}	
	int* p=func(a,b);
	cout<<p[0]<<" "<<p[1];
	
	return 0;
}
