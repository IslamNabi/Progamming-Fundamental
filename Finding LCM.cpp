#include<iostream>
using namespace std;
int main ()
{
	int n1,n2,max;
	cin>>n1>>n2;
	
	if(n1>n2)
	max=n1;
	else
	max=n2;
	
	while(1){
		if(max%n1 == 0 && max%n2==0)
		{
			cout<<"LCM is: "<<max;
			break;
		}
		else 
		max++;	
	}

	return 0;
}
