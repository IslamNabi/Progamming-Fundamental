#include<iostream>
using namespace std;
int main (){
	char a;
	cin>>a;
	
	if(a>=65 && a<=90)
	{
		a=a+32;
		cout<<"Lower Case Letter is: "<<a;
	}
	else if(a>=97 && a<=122)
	{
		a=a-32;
		cout<<"Upper Case Letter is: "<<a;
	}
	
	
	return 0;
}
