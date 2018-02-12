#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int n,i,a,b;
	cout<<"number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
	b=pow(2,i);
	break;
		}
	    
	}
	cout<<"power is"<<b;
	
	return 0;
}
