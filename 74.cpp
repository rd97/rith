#include<iostream>
using namespace std;
int main()
{
    float a;
    int t;
    cout<<"number:";
    cin>>a;
    cout<<"output:";
    if(a<0)
    {
        t=a-0.5;
    }else
    {
        t=a+0.5;
    }
    cout<<t;
    return 0;
}
