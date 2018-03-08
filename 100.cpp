#include<iostream>
using namespace std;
int main() 
{
   int n,pro=1,mod;
   cin>>n;
   while(n!=0)
   {
       mod=n%10;
       pro=pro*mod;
       n=n/10;
   }
   cout<<pro;
   return 0;
}
