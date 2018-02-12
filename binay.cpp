#include <iostream>
using namespace std;
#include<string.h>
int main()
{
    char a[30];
    int i,d=0,w;
    cin>>a;
    w=strlen(a);
    for(i=0;i<w;i++)
    {
        if(a[i]=='0' || a[i]=='1')
        {
        d=1;
        }
        else
        {
            d=0;
        }
    }
    if(d==1)
    {
    	cout<<"yes";
    }
    else{
    	cout<<"no";
    }
    return 0;
}
