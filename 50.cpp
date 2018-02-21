#include<iostream>
using namespace std;
int main()
{
int i,n,flag=0;
cout<<"Enter any number";
cin>>n;
while(n>1)
{
if(n%2!=0)
{
flag=1;
break;
}
n=n/2;
}
if(flag==1)
{
cout<<"yes";
}
else
cout<<"no";
return 0;
}
