#include<iostream>
#include<iomanip>
using namespace std;

void plusMinus(int arr[], int n) 
{
    int pos=0, neg=0, zero=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
    }
    double pp, np, zp;
    pp = double(pos)/n;
    np = double(neg)/n;
    zp = double(zero)/n;
    
    cout<<fixed<<setprecision(6)<<pp<<endl;
    cout<<fixed<<setprecision(6)<<np<<endl;
    cout<<fixed<<setprecision(6)<<zp;
    

}

int main ()
{
	int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    plusMinus(arr,n);
	
	
	return 0;
}
