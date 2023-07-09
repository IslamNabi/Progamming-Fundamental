#include<iostream>
using namespace std;

int marsExploration(string s)
{
	int count = 0;
	int f=0,se=0,t=0;
	int i=0;
	while(i<s.length())
	{
		if(s[i]!='S')
		f++;
		else if(s[i+1]!='O')
		se++;
		else if(s[i+2]!='S')
		t++;
		i=3;
	
	}
	count=f+se+t;

	return count;
}

int main ()
{
	string s;
	getline(cin,s);
	int result=0;
	result=marsExploration(s);
	cout<<result;
	
	
	return 0;
}
