#include<iostream>
using namespace std;
int main()
{
	int a[150],i,n=4,j,flag;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{ 
		if(a[i]>a[j])
		{
	    flag=a[i];
	    a[i]=a[j];
	   a[j]= flag;
	}
	}
	}
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<'\t';}
	return 0;
}
