#include<iostream>
using namespace std;
int main ()
{
	int a,b,c;
	int max=0;
	
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	max=a;
	else if(b>a && b>c)
	max=b;
	else
	max=c;
	
	cout<<"MAximum Number Among Three is: "<<max;
	
	return 0;
}
