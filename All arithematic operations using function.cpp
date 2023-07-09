#include<iostream>
using namespace std;
double myFun(double n1, double n2, char op)
{
	double count;
	switch(op)
	{
		case '+':
			count=n1+n2;
			break;
		case '-':
			count=n1-n2;
			break;
		case '*':
			count=n1*n2;
			break;
		case '/':
			if(n2!=0)
			{
				count=n1/n2;
			}
			else
			count=00;	
	}
	
	
	
	return count;
}



int main ()
{
	double n1,n2;
	char op;
	double result;
	cin>>n1>>n2>>op;
	result=myFun(n1,n2,op);
	cout<<"Result is: "<<result;
	
	
	return 0;
}
