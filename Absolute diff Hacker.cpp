#include<iostream>
using namespace std;
void update(int *pa ,int *pb) 
{
  int sum=0;
  int diff=0;
  sum=*pa + *pb;
  diff=*pa - *pb;
    if(diff<0)
    {
        diff=(diff)*(-);
    }
    else
    {
    diff*(+);
    }
   cout<<sum<<endl;
   cout<<diff; 
       
}

int main ()
{
	 int a, b;
    cin>>a;
    cin>>b;
    int *pa = &a, *pb = &b;
    update(*pa,*pb);
	
	return 0;
}
