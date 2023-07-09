#include<iostream>
using namespace std;
int main ()
{
	string s;
	cin>>s;
	cout<<s<<endl;
	for(int i=0; i<s.size();i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<s.size();i++)
	{
		cout<<s[i]<<endl;
	}
	
	return 0;
}
