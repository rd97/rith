#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,c,n=10,i;
cout<<a<<b;
for(i=0;i<=n;i++)
{
c=a+b;
cout<<c;
a=b;
b=c;
}
	return 0;
	
}
