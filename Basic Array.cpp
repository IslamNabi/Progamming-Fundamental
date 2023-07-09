#include<iostream>
using namespace std;
int main ()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<arr[0]<<" "<<arr[8]<<" "<<arr[7]<<" "<<arr[2]<<" "<<arr[9];
	cout<<endl;
	int index1;
	int index2;
	cin>>index1>>index2;
	
	cout<<arr[index1]<<" "<<arr[index2]<<endl;
	if((arr[index1])%2==0)
	cout<<"Even";
	else
	cout<<"Odd";
	cout<<endl;
	if((arr[index1])>(arr[index2]))
	cout<<arr[index1];
	else
	cout<<arr[index2];	
	
	return 0;
}
