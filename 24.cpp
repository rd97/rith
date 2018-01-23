#include<iostream>
using namespace std;
int main()
{
	int a[200],i,n=4,k,temp;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	for(k=i+1;k<n;k++)
	{ 
		if(a[i]>a[k])
		{
	    temp=a[i];
	    a[i]=a[k];
	   a[k]= temp;
	}
	}
	}
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<'\t';}
	return 0;
}
