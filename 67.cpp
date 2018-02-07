#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"number";
    cin>>n;
    while(n%10!=0)
    {
        n++;
    }
    cout<<"multiples"<<n;
    return 0;
}
