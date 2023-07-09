#include<iostream>
using namespace std;
int main ()
{
	string islam, nabi;
    cin>>islam>>nabi;
    
    int len1,len2;
    len1=islam.size();
    len2=nabi.size();
    
    string result="";
    result=islam+nabi;
    
    cout<<len1<<" "<<len2<<endl;
    cout<<result<<endl;
    nabi[0]='a';
    islam[0]='e';
    cout<<islam<<" "<<nabi;
	return 0;
}
