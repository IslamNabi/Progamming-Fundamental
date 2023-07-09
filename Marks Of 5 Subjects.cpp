#include<iostream>
using namespace std;
int main ()
{
	int n,mark,total=0;
	float av;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cout<<"Enter Marks of Subject: "<<i<<":";
		cin>>mark;
		total=total+mark;
	}
	av=((float)total/n*100)/100;
	cout<<"Total marks of the student is: "<<total;
	cout<<"Average of the Marks is: "<<av;
	
	
	return 0; 
}
