#include<iostream>
using namespace std;
int main()
{
    int value,i;
    cout<<"enter:";
    cin>>value;
    for(i=1;i<=value;i++)
    {
        if(value%i==0)
        {
            cout<<i<<" ";
        }
    }return 0;
}
