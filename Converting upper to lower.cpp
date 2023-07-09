#include<iostream>
using namespace std;
int main ()
{
	char a;
	cout<<"Enter a lower letter: \n";
	cin>>a;
	a=a-32;
	cout<<"Upper case of this letter is: \n"<<(char)a;	
	
	
	return 0;
}
