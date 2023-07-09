#include<iostream>
using namespace std;

class Employee{
	private:
		int salary;
	public:
		//Setter
		void setSalary(int s)
		{
			salary=s;
		}
	
		//Getter
		int getSalary(){
			return salary;
		}	
};


int main ()
{
	/* How to access private attributes/variables?
	Ans:- 
	To access private attributes use public "set" and "get" methods.(This is called encapsulation)
	*/
	Employee myObj;
	myObj.setSalary(5000);
	int s;
	s=myObj.getSalary();
	cout<<s;
	
	
	return 0;
}
