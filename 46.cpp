#include <iostream>
using namespace std;

int main()
{
	int a[50],i,n=0;
	for(i=0;i<5;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
	    n=1+a[i];
	    cout<<'\n'<<n;
	}
	
	return 0;
}
