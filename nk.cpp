#include <iostream>
using namespace std;
int main() 
{
int a[10],n,k,i,s=0;
cin>>n>>k;
for(i=1;i<n;i++)
{
cout<<a[i];
}
for(i=1;i<k;i++)
{
s=s+a[i];
}
cout<<"sum="<<s;

	return 0;
}
