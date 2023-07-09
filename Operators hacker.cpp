#include<iostream>
#include<cmath>
using namespace std;

void solve(double cost, int tipPer, int taxPer) 
{   
    double tip;
    double tax;
    int totalcost;
    tip = (cost*tipPer)/100;
    tax = (cost*taxPer)/100;
    double total=0;
    total = cost+tip+tax;
  
if(((int)(total+0.5))>((int)total))
{
totalcost = ((int)(total+0.5));
}
else
{
totalcost = ((int)total);
}
    
    round(totalcost);
    cout<<totalcost;

}

int main ()
{
	double cost;    
    int tipPer;
    int taxPer;
    cin>>cost;
    cin>>tipPer;
    cin>>taxPer;
    solve(cost, tipPer, taxPer);
	
	
	return 0;
}
