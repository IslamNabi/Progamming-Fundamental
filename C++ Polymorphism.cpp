#include<iostream>
/*
In Polymorphism we use same method to perform different actions
it occours when we deal with more than 1 classe...
*/

using namespace std;
//Base Class
class Animal{
	public:
		void animalSound(){
			cout<<"The animal makes a sound\n";
		}
};
//Derived Class
class Pig : public Animal{
	public:
		void animalSound(){
			cout<<"The Pig says: wee wee \n";
		}
};
//Derived Class
class Dog : public Animal{
	public:
		void animalSound(){
			cout<<"The Dog says: Bow wow \n";
		}
};

int main ()
{
	Animal myAnimal;
	Pig myPig;
	Dog myDog;
	
	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
	
	
	return 0;
}
