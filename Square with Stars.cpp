#include<iostream>
using namespace std;
int main (){
	int r,col;
	cin>>r>>col;
	int arr[r][col];
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<col; j++)
		{
			arr[i][j]=42;
		}
	}
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<(char)arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
