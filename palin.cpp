#include<iostream>
using namespace std;
int main()
{
int a,b,c,d=0;
cin>>a;
a=b;
while(a!=0)
{
c=a%10;
b=b/10;
d=((d*10)+c);
}
if(a==d)
{
cout<<"palindrome";
}
else
{
cout<<"not a palindrome";
}
return 0;
}
