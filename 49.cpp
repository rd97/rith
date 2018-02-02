#include<iostream>
using namespace std;
int main()
{
    int a[20],i,n=5,sum=0;
    for(i=0;i<n;i++)
    {
      cin>>a[i];  
    }
    for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
