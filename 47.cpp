#include <iostream>
using namespace std;

int main()
{
	int a[50],i,max,min;
	for(i=0;i<=2;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	min=a[0];
	for(i=1;i<=2;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		cout<<"max is"<<max;
		cout<<'\n';
		for(i=0;i<=2;i++)
 if(a[i]<min)
{
	min=a[i];
}
cout<<"min is"<<min;
return 0;
}
