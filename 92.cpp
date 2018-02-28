#include<iostream>
using namespace std;
int main()
{
int n,a[10],sum=0,i;
cout<<"enter value";
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<sum;
}
