

					// How to Pass Objects as Perimeters

#include<iostream>
using namespace std;

class Student{
	public:
		double marks;
		
		//constructor to initialize marks
		
		Student(double m){
			marks=m;
		}
	
};

// Function that has objects as perimeters

void calculateAverage(Student s1, Student s2){
	double average;
	average = (s1.marks+s2.marks)/2;
	cout<<"Avearge Marks: "<<average;
}

int main ()
{
	Student student1(80.0), student2(88.0);
	

	calculateAverage(student1,student2);
	
	
	
	return 0;
}
