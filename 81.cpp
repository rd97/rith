#include<iostream>
using namespace std;
int main()
{
   int kabali[50],opponent[20],i,dif;
  for(i=0;i<=2;i++)
   { 
       cout<<"enter two war battele num:";
       cin>>kabali[i]>>opponent[i];
   }
   for(i=0;i<=2;i++)
   {
    dif=kabali[i]-opponent[i];
   if(dif<0)
   {
   dif=-dif;
   }
   else
   {
       dif=dif;
   }
   cout<<dif<<'\n';
   }
   return 0;
}
