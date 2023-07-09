#include<iostream>
using namespace std;
int main (){
	char a;
	cin>>a;
	
	if(a>=65 && a<=90)
	{
		cout<<"Upper Case Alphabet Letter: ";
	}
	else if(a>=97 && a<=122)
	{
		cout<<"Lower Case Alphabet Letter";
	}
	else if(a>=48 && a<=57)
	{
		cout<<"Digits";
	}
	else
	cout<<"Special Symbol";
	
	
	
	return 0;
}
