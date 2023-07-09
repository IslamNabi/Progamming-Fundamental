#include<iostream>
using namespace std;
int main ()
{
	string input;
	cout<<"Enter a Sentence: \n";
	getline(cin,input);
	int size;
	size=input.size();
	for(int i=size; i>=0; i--)
	{
		cout<<input[i]<<" ";
	}
	
	
	
	return 0;
}
