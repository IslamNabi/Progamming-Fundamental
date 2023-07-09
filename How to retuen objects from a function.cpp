#include<iostream>
using namespace std;
	// Class
class Student {
	public:
	double	mark1,mark2;		
};

	//Function that returns objects of Student class
	
Student createStudent(){
	
	Student student;
	//initialize variables
	student.mark1=90;
	student.mark2=80;
	
	//Print variables of student
	cout<<"Mark 01: "<<student.mark1<<endl;
	cout<<"Mark 02: "<<student.mark2;
	
		return student;
}

int main ()
{
	Student student1;
	
	// Function Call
	student1 = createStudent();
	return 0;
}
