#include<iostream>
using namespace std;
int main ()
{
	//Formula:-\
	
	//Simple Interest = ( Amount * Rate * Time ) / 100;
	
	int am,rate,time;
	cin>>am>>rate>>time;
	float in;
	in= (am*rate*time)/100;
	cout<<"Simple Interest Is: "<<in;
	
	return 0;
}
