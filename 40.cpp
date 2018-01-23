#include <iostream>
using namespace std;

int main()
{ 
	int n=0,t=1,total,a,i;
	cin>>a;
	cout<<n<<'\t'<<t;
	for(i=0;i<a;i++)
	{
		total=n+t;
		cout<<'\t'<<total<<'\t';
		n=t;
		t=total;
	}
	return 0;
}
