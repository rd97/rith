#include<iostream>
using namespace std;
int main()
{
    int n,m,s=0;
    cin>>n>>m;
    s=n+m;
    if(s%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return 0;
}
