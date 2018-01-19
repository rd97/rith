#include<iostream>
using namespace std;
int main()
{
int a,i,temp=0;
cin>>a;
for(i=2;i<a/2;i++)
{
if((a%i)==0)
{
	temp=1;
	break;
}}

if(temp==0)
{
cout<<"prime";
}
else
{
cout<"not a prime";
}
return 0;
}
