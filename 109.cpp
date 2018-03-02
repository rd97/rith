#include<iostream>
using namespace std;
int main()
{
	int a[50],i,min;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	
	}min=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]<=min)
		{
		min=a[i];
		}
	}	cout<<min;
	return 0;
	
}

