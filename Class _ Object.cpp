#include<iostream>
using namespace std;

class Myclass
{
	public:
		int myNum;
		string mystr;
};


int main ()
{
	Myclass myObj;
	
	myObj.myNum=20;
	myObj.mystr="Islam Ul Nabi";
	
	cout<<myObj.myNum<<"   "<<myObj.mystr;
	
	
	return 0;
}
