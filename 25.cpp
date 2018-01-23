#include<iostream>
using namespace std;
int main()
{
	int a[200],i,n=4,k,temp;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=n;i++)
	{
	for(k=0;k<=(n-i-1);k++)
	{ 
		if(a[i]>a[k+1])
		{
	    temp=a[i];
	    a[i]=a[k+1];
	   a[k+1]= temp;
	}
	}
	}
	{
	cout<<a[n/2]<<'\t';}
	return 0;
}
  
