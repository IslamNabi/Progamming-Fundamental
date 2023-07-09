#include<iostream>
using namespace std;
int main ()
{
	string a;
	cout<<"Enter a string: \n";
	getline(cin,a);
	int count=1;	
	for(int i=0; i<a.size(); i++)
	{
		if(a[i]==' ')
		count++;
	}
	cout<<"Total Words are: "<<count;
	return 0;
}
