#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"Enter number of test cases: \n";
	cin>>n;
	int i=1;
	string input1;
	string input2;
	
	while(i<=n)
	{
		cin>>input1;
		cin>>input2;
		
		if(input1 == input2)
		cout<<"Strings are similar:";
		else
		cout<<"String are not similar";
		
		i++;
	}
	
	
	
	return 0;
}
