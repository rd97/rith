#include<iostream>
using namespace std;
int main()
{
    int n,remain;
    cin>>n;
     do
    {
        n=n%10;
        if(n==1 || n==0)
        {
        remain=0;
        }
        else{
        remain=1;
        }
        }while(n!=0);
    if(remain==0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
