#include<iostream>
using namespace std;
int main ()
{
	 int n;
    cin>>n;
    string str;
    string even,odd;
    
    for(int i=0; i<n; i++)
    {
        cin>>str;
	
	}
	
	for(int i=0; i<str.size(); i++)
    {
        if(i%2 == 0)
        {
            even=even+str[i];
        }
    }
	cout<<even;
	return 0;
}
