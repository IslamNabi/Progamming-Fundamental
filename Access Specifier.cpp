#include<iostream>
using namespace std;

class islam{
	public:
		int x;
	private:
		int y;
};


int main ()
{
	islam nabi;
	nabi.x=20;	// Allowed because x is a public specifier
	nabi.y=30;
	cout<<nabi.x;// Not Allowed because y is a private specifier
	
	
	return 0;
}
