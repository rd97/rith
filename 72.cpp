#include<iostream>
using namespace std;
int main()
{
    char q[10];
    int i,n=5;
     for(i=0;i<n;i++)
    {
    cin>>q[i];
    }
    for(i=0;i<n;i++)
{
    if(q[i]=='a'||q[i]=='i'||q[i]=='o'||q[i]=='e'||q[i]=='u')
    {
        cout<<"yes";
        break;
    }
}
return 0;
}
