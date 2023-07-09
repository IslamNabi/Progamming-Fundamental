#include<iostream>
using namespace std;
int main ()
{
	float temp;
	cout<<"Enter Temperature in Degree Celcius: ";
	cin>>temp; 
//Fahrenheit = ((9/5) * Celsius) + 32; //or you can use 1.8 in place of 9/5
	float fah;
	fah = ((1.8)*temp)+32;
	cout<<"After Conversion into Fahernheit: "<<fah;
	
	return 0;
}
