#include<iostream>
using namespace std;
int main()
{
	int a[90],n,i,rem;
	cout<<"number";
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]%2==0)
	    {  rem=a[i]/2;
	        cout<<rem<<'\n';
	    }
	    else
	    {
	        cout<<a[i]<<'\n';
	    }
	}return 0;
}
