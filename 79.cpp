#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    c=a*b;
    for(i=2;i<c;i++)
    {
        if(c==(i*i))
        {
            cout<<"yes u r correct";
            break;
        }
    }return 0;
}
