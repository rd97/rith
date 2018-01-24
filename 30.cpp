#include<iostream>
using namespace std;
int main() 
{
int a,b,c,d,e,f;
cout<<"give two time in hrs:min format";
cin>>a>>b>>c>>d;
if((a>c)&&(b<d))
{
    a--;
e=(a+1)-c;
f=(d-b);
}
else if((c>a)&&(b<d))
{
    e=(a)-c;
f=b-d;
e=-e;
f=-f;
}
else if((c>a)&&(b>d))
{
e=(a+1)-c;
f=60-(b-d);
f=-f;
}
else 
{
e=a-c;
f=b-d;
}
cout<<e<<f; return 0;
}
