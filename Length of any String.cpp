#include<iostream>
using namespace std;
int main ()
{
	string a;
	cout<<"Enter any String: \n";
	getline(cin,a);
	int length=0;
	length=a.size();
	cout<<"Length of entered string is: "<<length;
	
	
	return 0;
}
