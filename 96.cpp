#include<iostream>
using namespace std;
void main(int)
{
    int i,n,t=0;
    cout<<"Enter a number:";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        t=t+1;
    }
    if (t==2)
    cout<<"The number is COMPOSITE";
    return 0;
}
