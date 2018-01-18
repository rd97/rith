#include<iostream.h>
using namespace std;
int main()
{
int n;   
int c=0;
cin>>n;
while(n!=0)
{
n=n/10;
++c;
}
cout<<"output="<<c;
}
