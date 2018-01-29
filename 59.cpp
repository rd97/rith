#include<iostream>
using namespace std;
int main()
{
	int a[15],i,t;
	for(i=0;i<=10;i++)
	{
		cin>>a[i];
	
	}t=a[0];
	for(i=1;i<=10;i++)
	{
		if(a[i]>=t)
		{
		t=a[i];
		}
	}	cout<<t;
	return 0;
	
}
