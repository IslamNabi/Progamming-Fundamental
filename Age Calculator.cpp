#include<iostream>
using namespace std;
int main ()
{
	int age;
	cin>>age;
	int month, hour, days, minutes;
	month= age*12;
	days= age*365;
	hour= days*24;
	minutes=hour*60;
	
	cout<<"Months are: "<<month<<endl;
	cout<<"days are: "<<days<<endl;
	cout<<"Hours are: "<<hour<<endl;
	cout<<"Minutes are: "<<minutes<<endl;
		
	return 0;
}
