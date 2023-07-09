#include<iostream>
				/*
					C++ Constructor:---
						A constructor is a special type of member function that is called
						 automatically when an object is created.
						 
						 In C++, a constructor has the same name as that of the class and it
						  does not have a return type.
						  
					-->
							A constructor is called automatially when an object is created.
				
				*/
				

using namespace std;

class Wall {
	public: 
		Wall(){
			cout<<"Hello Islam!!!!";
		}	
};


int main ()
{
	Wall obj;
	return 0;
}
