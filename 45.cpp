#include <iostream>
using namespace std;

int main()
{
int a,f,p=0;
cin>>a;
do
{
	a=a/10;
	f=a;
	p++;
}while(a!=0);
	cout<<p;
	return 0;
}
