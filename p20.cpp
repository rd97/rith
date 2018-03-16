#include<iostream>
using namespace std;
int main()
{
    char a[30];
    int i;
    cout<<"enter name:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        a[i]=a[i]+3;
        cout<<a[i];
    }return 0;
}
